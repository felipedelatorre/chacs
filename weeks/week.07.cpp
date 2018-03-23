// 7.13, 7.18, 7.32

//7.13
#include <iostream>
using namespace std;

int main() {
	int i;
	int index = 0;
	int myNumber;

	int myArray[20];

	cout << "Program to display unique numbers entered" << endl;

	for (int count = 0; count <= 20; count++)
	{
		cout << "Enter Numeber: ";
		cin >> myNumber;

		if (myNumber < 10 || myNumber > 100)
		{
			cout << "Invalid Range";
			continue;
		}
		for ( i = 0; i < index; i++)
		{
			if (myArray[i] == myNumber)
			{
				break;
			}
		}
		if (i == index)
		{
			myArray[index] = myNumber;
			index++;
		}
		else
		{
			cout << "\tduplicate";
		}
	}

	cout << "Unique numbers are: ";
	for ( i = 0; i < index; i++)
	{
		cout << "\t" << myArray[i];
	}
}

//7.16
#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>
using namespace std;

int main() {
	default_random_engine engine(static_cast<unsigned int>(time(0)));
	uniform_int_distribution<unsigned int> randomInt(1, 6);

	const size_t arraySize{ 13 };
	array<unsigned int, arraySize> frequency{};

	for (unsigned int roll = 1; roll < 36'000'000; ++roll)
	{
		int die1 = randomInt(engine);
		int die2 = randomInt(engine);
		int sum = die1 + die2;
		
		++frequency[sum];
	}

	for (size_t face = 2; face < frequency.size(); ++face)
	{
		cout << setw(4) << face << setw(13) << frequency[face] << endl;
	}
}