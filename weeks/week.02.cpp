//2.16 to 2.20, 2.28, and 2.30

// 2.16 Arithmetic
#include <iostream>
using namespace std;

int main() {
	int x{ 0 };
	int y{ 0 };

	cout << "Enter two integers: ";
	cin >> x >> y;
	
	cout << "The sum is " << x + y << endl;
	cout << "The product is " << x * y << endl;
	cout << "The difference is " << x - y << endl;
	cout << "The quotient is " << x / y << endl;
}

//2.17 Printing
#include <iostream>
using namespace std;

int main() {

	cout << "1 2 3 4" << endl ;

	cout << "1 " << "2 " << "3 " << "4" << endl;

	cout << "1 ";
	cout << "2 ";
	cout << "3 ";
	cout << "4 " << endl;
}

//2.18 Comparing Integers
#include <iostream>
using namespace std;

int main() {
	int x{ 0 };
	int y{ 0 };

	cout << "Enter 2 Integers: ";
	cin >> x >> y;

	if (x == y) {
		cout << "The numbers are equal" << endl;
	}

	if (x > y) {
		cout << x << " is larger " << endl;
	}

	if (x < y) {
		cout << y << " is larger " << endl;
	}
}

//2.19  Arithmetic, Smallest and Largest
#include <iostream>
using namespace std;

int main() {
	int x, y, z;

	cout << "Enter 3 Integers: ";
	cin >> x >> y >> z;

	cout << "Sum is " << x + y + z << endl;
	cout << "Average is " << (x + y + z)/3 << endl;
	cout << "Product is " << x * y * z << endl;

	if ((x<y) && (x<z))
		cout << "Smallest is " << x << endl;
	if ((y<x) && (y<z))
		cout << "Smallest is " << y << endl;
	if ((z<x) && (z<y))
		cout << "Smallest is " << z << endl;
	if ((x>y) && (x>z))
		cout << "Largest is " << x << endl;
	if ((x<y) && (z<y))
		cout << "Largest is " << y << endl;
	if ((z>y) && (z>x))
		cout << "Largest is " << z << endl;
}

//2.20 Diameter, Circumference and Area of a Circle
#include <iostream>
using namespace std;

int main() {
	int x;

	cout << "Enter radius: ";
	cin >> x ;

	cout << "Diameter is " << x * 2 << endl;
	cout << "Circumference is " << 2 * 3.14159 * x << endl;
	cout << "Area is " << 3.14159 * x * x << endl;

}
 //2.28 Digits of an Integer
 #include <iostream>
using namespace std;

int main() {
	int x, digit1, digit2, digit3, digit4, digit5;

	cout << "Enter 5 digit number: ";
	cin >> x ;

	digit1 = x % 10;

	x = x / 10;
	digit2 = x % 10;

	x = x / 10;
	digit3 = x % 10;

	x = x / 10;
	digit4 = x % 10;

	x = x / 10;
	digit5 = x % 10;

	cout << digit5 << " " << digit4 << " " << digit3 << " " << digit2 << " " << digit1<< endl;
}

//2.30 Body Mass Index Calculator
#include <iostream>
using namespace std;

int main() {
	int x, y, bmi;

	cout << "Enter your weight in kg: ";
	cin >> x ;

	cout << "Enter your height in m: ";
	cin >> y;

	cout << "Your BMI is: " << x / ( y * y ) << endl;
	cout << "BMI Values\n";
	cout << "Underweight: Less than 18.5\n";
	cout << "Normal: Between 18.5 and 24.9\n";
	cout << "Overweight: Between 25 and 29.9\n";
	cout << "Obese: More than 30\n";
}