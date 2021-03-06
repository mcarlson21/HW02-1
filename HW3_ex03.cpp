// Program: HW3 ex03
// Name: Madelyn Carlson
// Date: 5/29/18

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

/*UML diagram
class:EvenNumber

Properties:int value
int next
int previous

Behaviors:
display even
plus one
minus one

*/

class EvenNumber
{
public:
	int value;
	int next;
	int previous;

	//no arg constructor
	EvenNumber()
	{
		value = 0;
	}

	//constructor
	EvenNumber(int newValue)
	{
		value = newValue;
	}

	int getValue()
	{
		return value;
	}

	int getNext()
	{
		return next + 1;
	}

	int getPrevious()
	{
		return previous - 1;
	}



};

int main()
{
	//calling functions
	EvenNumber even(16);
	cout << "Even number is: " << getValue;

	cout << "The next number is: " << getNext;

	cout << "The previous number is: " << getPrevious;
    return 0;
}

