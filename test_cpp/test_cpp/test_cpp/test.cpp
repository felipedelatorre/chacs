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