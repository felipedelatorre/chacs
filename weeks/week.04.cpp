// 4.13, 4.17, 4.26, 4.35, 4.36 - In addition 4.11, 4.12, 4.18, 4.19-4.25, 4.35

//4.11 Correct the Code Errors
//	a)
#include <iostream>
using namespace std;

int main() {
	int age{ 65 };

	if (age >= 65) {
		cout << "age is greater than or equal to 65";
	}
	else {
		cout << "age is less than 65";
	}
	
}

//	b)
#include <iostream>
using namespace std;

int main() {
	int age{ 65 };

	if (age >= 65) {
		cout << "age is greater than or equal to 65";
	}
	else {
		cout << "age is less than 65";
	}
	
}

//	c)
#include <iostream>
using namespace std;

int main() {
	unsigned int x { 1 };
	unsigned int total{ 0 };

	while (x <= 10) {
		total += x;
		++x;
		cout << "x is = " << x << endl;
		cout << "total is = " << total << endl;

	}

	
}

//	d)
#include <iostream>
using namespace std;

int main() {
	unsigned int x { 1 };
	unsigned int total{ 0 };

	while (x <= 100) {
		total += x;
		++x;
		cout << "x = " << x << endl;
		cout << "total = " << total << endl;
	}
	
}

//	e)
#include <iostream>
using namespace std;

int main() {
	int y { -20 };

	while (y < 0) {
		cout << "y = " << y << endl;
		++y;
	}
	
}

// 4.12 What does this program do?
Pseudocode
While x is less or equal to 10
	y is equals to the product of x * x
	Print y
	add y to sum
	increase x by one 

// 4.13 Gas Mileage
Pseudocode

initialize miles driven to zero
initialize total mpg to zero
initialize conter to one

	Prompt user for miles driven or -1 to quit
	Promot user for gallons use 
	mpg = miles driven / gallons
	total mpg = total mpg + mpg / counter
	counter + 1

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	unsigned int milesDriven{ 0 };
	double totalMPG{ 0 };
	unsigned int counter{ 1 };

	while (milesDriven != -1)
	{

		cout << "Enter miles driven or -1 to quit: ";
		cin >> milesDriven;

		if (milesDriven != -1)
		{
			cout << "Enter gallons used: ";
			int gallonsUsed;
			cin >> gallonsUsed;
			double mpg{ static_cast<double> (milesDriven) / gallonsUsed };
			cout << "MPG this trip: " << mpg;
			totalMPG = (totalMPG + mpg) / counter;
			cout << "\nTotal MPG: " << totalMPG << endl;
			counter++;
			cout << endl;
		}
	}

}

//4.17 Find the Largest
#include <iostream>
using namespace std;

int main() {

	int counter{ 1 };
	int number{ 0 };
	int largest{ 0 };

	while (counter <= 10)
	{
		cout << "Enter Number: ";
		cin >> number;

		if (number > largest)
		{
			largest = number;
		}
		cout << "The largest number so far is: " << largest << endl;
		counter++;
	}
	cout << "The largest number is: " << largest << endl;
}

//4.18 Tabular Output
#include <iostream>
using namespace std;

int main() {
	int n = 1;

	cout << "N\t10*N\t100*N\t1000*N" << endl;
	cout << endl;
	
	while (n <=5)
	{
		cout << n << "\t" << n * 10 << "\t" << n * 100 << "\t" << n * 1000 << endl;
		n++;
	}
}

//4.19 Find the Two Largest Numbers
#include <iostream>
using namespace std;

int main() {

	int counter{ 0 };
	int number;
	int largest{ 0 };
	int largest2;

	cout << "Enter 10 numbers: " << endl;

	while (counter < 10)
	{
		cin >> number;

		if (largest < number)
		{
			largest2 = largest;
			largest = number;
		}
		else
		{
			if (largest2 < number)
			{
				largest2 = number;
			}
		}
		counter++;
	}
	cout << "Largest number is: " << largest << endl;
	cout << "2nd largest number is: " << largest2 << endl;

}

//4.20 Validating User Input
#include <iostream>
using namespace std;

int main() {
	unsigned int passes{ 0 };
	unsigned int failures{ 0 };
	unsigned int studentCounter{ 1 };

	while (studentCounter <= 10) {
		cout << "Enter result (1 = pass, 2 = fail): ";
		int result;
		cin >> result;
		if (result == 1) {
			passes = passes + 1;
			studentCounter++;
		}
		else if (result == 2)
		{
			failures++;
			studentCounter++;
		}
		else
		{
			cout << "Please Enter valid input" << endl;
		}


	}

	cout << "Passed: " << passes << "\nFailed: " << failures << endl;

	if (passes > 8) {
		cout << "Bonus to instructor!" << endl;
	}
}

//4.21 What Does This Program Do?
****
++++++++
****
++++++++
****
++++++++
****
++++++++
****
++++++++

//4.22 What Does This Program Do?
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
>>>>>>>>>>
<<<<<<<<<<
