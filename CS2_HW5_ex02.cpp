// CS2_HW5_ex02 (12.4)
// Madelyn Carlson
//6/12/18

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//use template to sort function
template<typename T>
//bool only returns true or false
T isSorted(const T list[], T size)
{
	for (int i = 0; i < size; i++)
	{
		if (list[i] > list[i + 1])
			return false;
	}
	return true;
}

//function to display 
void printArray(const T list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " " << endl;
	}
}

//calling 
int main()
{
	//int
	cout << list[] = { 3,5,1,0,2,8,7 };
	isSorted(list, 7);
	printArray(list, 8);

	//double
	cout << list[] = { 3.0,5.0,1.0,0.0,2.0,8.0,7.0 };
	isSorted(list, 7);
	printArray(list, 8);

	//string
	cout << list[] = { "Atlanta", "Denver", "Chicago", "Dallas" };
	isSorted(list, 7);
	printArray(list, 8);
    return 0;
}

