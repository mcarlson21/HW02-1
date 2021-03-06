// Program: HW3 ex05
// Name: Madelyn Carlson
// Date: 5/29/18

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

/*UML diagram
Class: MyInteger

Properties:int value

Behavior:
int even
int odd
int prime
int even static
int odd static
int prime static
const isEven
const isOdd
const isPrime
int equals
const equals
parseInt
*/

class MyInteger
{
public:
	int value;

	//constructor
	MyInteger(int newValue)
	{
		value = newValue;
	}

	//get function
	int	getValue()
	{
		return value;
	}

	//static functions
	static int isEven()
	{
		return true;
	}

	static int isOdd()
	{
		return true;
	}

	static int isPrime()
	{
		return true;
	}

	static int isEven(const MyInteger&)
	{
		return true;
	}

	static int isOdd(const MyInteger&)
	{
		return true;
	}

	static int isPrime(const MyInteger&)
	{
		return true;
	}

	//constant functions
	int equals()
	{
		return true;
	}

	const int equals(MyInteger&)
	{
		return true;
	}

	//static function
	static parseInt(const string&)

};


int main()
{
	MyInteger int1;
	MyInteger int2;
	MyInteger int3;

	cout << "First object" << int1.getValue() << endl;

	cout << "Second object" << int2.getValue() << endl;

	cout << "Third object" << int3.getValue() << endl;

    return 0;
}

