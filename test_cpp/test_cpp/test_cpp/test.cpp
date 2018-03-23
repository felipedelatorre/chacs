// **********************************************
//  main.cpp
//  CS161_Final_18
//
//  Name: Felipe Delatorre
//  GitHub URL: https://github.com/Chacs
// **********************************************

// #include "stdafx.h"          //  <--- Uncomment  For Visual Studio Only
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib> 

using namespace std;

// Put function headers here as needed

// Do not change the headers below
int charToInt(char ch);
template <class T>
string to_string(T num);
template <class T>
void vectorPrint(const vector<T>& v);

// Print a vector of some type, leave this alone
template <typename T>
void vectorPrint(const vector<T> &list) {
	for (T item : list) {
		cout << item << " ";
	}
}

// int to string alternative if your compiler does not provide it.
// Uncomment this code if your compiler cannot find to_string.

template <class T>
string to_string(T num) {
ostringstream convert;   // stream used for the conversion
convert << num;  	   // insert the string representation of 'num' into the stream
return convert.str();
}


// Convert a char digit '0'..'9' to int
int charToInt(char ch) {
	return ch - '0';
}

// <<<<<<<<<<<<<  Put your class code here >>>>>>>>>>>>>>>

class Exam
{
public:
	Exam() {
	}

	Exam(int score)
		: number{ score } {
		if (score < 1)
		{
			number = 1;
		}
	}

	void setScore(int score) {
		number = score;
	}

	int getScore() {
		return number;
	}

	vector<int> splitter(int score) {
		string x = to_string(score);
		for (size_t i = 0; i < x.size(); i++)
		{
			if (charToInt(x[i]) != 0)
			{
				testVector.push_back(charToInt(x[i]));
			}
		}
		return testVector;
	}

	int product(int z) {
		int results = 1;
		testVector.clear();
		for (int item : splitter(z)) {
			results *= item;
		}
		
		return results;
	}

	vector<int> sequence(int count) {
		number = count;
		int addition = 2;
		int sequenceMath = 0;
		for (size_t i = 1; i < number; i++)
		{
			if (i == 1)
			{
				sequenceVector.push_back(2);
			}
			else
			{
				sequenceVector.push_back( (product(sequenceVector[i - 2])) + (addition));
				addition = sequenceVector[i - 1];
			}
		}
		return sequenceVector;
	}

	vector<int> testVector;
	vector<int> sequenceVector;
	
private:
	int number{};
	vector<int> privateVector;
	
};

// <<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>

// Leave main() here 
// Create a class variable and test it in main
// 
int main() {
	Exam testCase{ 20 };
	
	vectorPrint(testCase.splitter(20340501));
	cout << endl;
	cout << testCase.product(20340501) << endl;
	vectorPrint(testCase.sequence(18));
	cout << endl;

}

/*********************************************
Copy/paste the exact output of your code here
inside this comment.

2 3 4 5 1
120
2 4 8 16 22 26 38 62 74 102 104 108 116 122 126 138 162
Press any key to continue . . .


********************************************/