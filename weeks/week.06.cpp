//6.24, 6.25, 6.26, 6.28, 6.30, 6.36, 6.40, 6.42, 6.47
 //6.11
 #include <iostream>
#include<cmath>
using namespace std;

int main() {
	cout << "x = " << fabs(7.5) << endl;
	cout << "x = " << floor(7.5) << endl;
	cout << "x = " << fabs(0.0) << endl;
	cout << "x = " << ceil(0.0) << endl;
	cout << "x = " << fabs(-6.4) << endl;
	cout << "x = " << ceil(-6.4) << endl;
	cout << "x = " << ceil(-fabs(-8+floor(-5.5))) << endl;
}

//6.24
#include <iostream>
using namespace std;

void printDigits();

int main() {
	printDigits();
}

void printDigits() {
	int a;
	int b{ 10000 };
	int quotient;

	cout << "Enter a number between 1 and 32767: ";
	cin >> a;

	do
	{
		quotient = a / b;
		a = a % b;
		b /= 10;
		if (quotient > 0)
		{
			cout << quotient << " ";
		}
	} while (a > 0);
}

//6.25
#include <iostream>
using namespace std;

int timeInSeconds(int, int, int);

int main() {
	int hours1, hours2;
	int minutes1, minutes2;
	int seconds1, seconds2;
	double difference;

	cin >> hours1;
	cin >> minutes1;
	cin >> seconds1;
	cin >> hours2;
	cin >> minutes2;
	cin >> seconds2;

	difference = timeInSeconds(hours1, minutes1, seconds1) - timeInSeconds(hours2, minutes2, seconds2);
	cout << fabs(difference);

}

int timeInSeconds(int hours, int minutes, int seconds) {
	return (12 - hours) * 60 * 60 + (60 - minutes) * 60 + seconds;
}

//6.28
#include <iostream>
using namespace std;

bool isPerfect(int);

int main() {

	for (int counter = 0; counter < 1000; counter++)
	{
		if (isPerfect(counter))
		{
			cout << counter << endl;
		}
	}
}

bool isPerfect(int number) {
	int sum = 0;
	int remainder;

	for (int i = 1; i < number; i++)
	{
		remainder = number % i;
		if (remainder == 0)
		{
			sum += i;
		}
		
	}

	if (sum == number)
	{
		return true;
	}
	else
		return false;

}

//6.30
#include <iostream>
using namespace std;

int reverseDigits(int);

int main() {
	cout << reverseDigits(5327) << endl;

}


int reverseDigits(int x){
	int reverse = 0;
	int remainder;

	while (x > 0)
	{
		remainder = x % 10;
		reverse = (reverse * 10) + remainder;
		x = x / 10;
	}

	return reverse;

}

//6.36
#include <iostream>
using namespace std;

double power(double, int);

int main() {
	int exponent;
	double base;

	cout << "Enter base: ";
	cin >> base;
	cout << "Enter Exponent: ";
	cin >> exponent;

	cout << base << " to the power of " << exponent << " is " << power(base, exponent) << endl;
}


double power(double base, int exponent) {
	if (exponent == 1)
	{
		return base;
	}
	else
		return base*power(base, exponent - 1);
}

//6.42
#include <iostream>
#include <cmath>
using namespace std;


double distance(double, double, double, double);

int main() {
	double x1Cordinates;
	double y1Cordinates;
	double x2Cordinates;
	double y2Cordinates;

	cin >> x1Cordinates;
	cin >> y1Cordinates;
	cin >> x2Cordinates;
	cin >> y2Cordinates;

	cout << "the distance between those points is: " << distance(x1Cordinates, y1Cordinates, x2Cordinates, y2Cordinates) << endl;
}

double distance(double x1, double y1, double x2, double y2) {
	return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}


//6.47