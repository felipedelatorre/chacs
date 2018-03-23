//5.5 to 5.15
//5.18 and 5.22
//5.30 to 5.35

//5.5
1) Control variable or loop counter
2) Control variable initial counter
3) Control variable increment
4) Loop/Continuation condition

//5.6
While
a) It use a keyword ‘while’
b)While statement are sentinel-controlled
iteration
c)while cannot be represented with equivalent to
for
d)The general format of while statement is
initialization;
while(loopContinuationCondition)
{
statements;
increment/decrement;
}

iteration
a) It use a keyword ‘for’
b)For statement are counter-controlled iteration
c)for can be represented with equivalent while
d)The general format of for statement is
for(initialization; loopContinuationCondition
;increment/decrement)
{
statement;
}

//5.7
do while loop reads the program at least once before deciding to execute it. while loop could run zero times

//5.8
Break
Breaks the loop

Continue 
Moves to the next iteration of the loop

//5.9 Find the Code Errors
a) 
#include<iostream>
using namespace std;

int main() {
	for (unsigned int x{ 1 }; x <= 100; ++x)
	{
		cout << x << endl;
	}
}

b)
#include<iostream>
using namespace std;

int main() {
	int value;
	cin >> value;
	switch (value % 2)
	{
	case 0:
		cout << "Even integer" << endl;
		break;
	case 1:
		cout << "Odd integer" << endl;
		break;
	default:
		break;
	}
}

c)
#include<iostream>
using namespace std;

int main() {
	
	for (int x = 19; x >= 1; x -= 2)
	{
		cout << x << endl;
	}
}

d)
#include<iostream>
using namespace std;

int main() {
	unsigned int counter{ 2 };

	do
	{
		cout << counter << endl;
		counter += 2;
	} while (counter <= 100);
}

//5.10 What does the program do?
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@
@@@@@

//5.11 Find the Smalles Value
#include<iostream>
using namespace std;

int main() {
	
	int x;
	cin >> x;
	int smallest = x;
	int counter = x;

	while (counter != 1)
	{
		cin >> x;
		if (smallest > x)
		{
			smallest = x;
		}
		--counter;
	}
	cout << "Smallest number is " << smallest << endl;
}

