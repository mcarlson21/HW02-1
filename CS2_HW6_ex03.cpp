// CS2_HW6_ex03 (13.5)
// Madelyn Carlson
// 6/14/18

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int year, rank, boynum, girlnum;

	string boyname, girlname, gender, fname, name;

	cout << "Enter a year: " << endl;
	cin >> year;

	switch (year)
	{
	case 1: cout << fname = "babyname.txt" << endl;
	break;
	}

	cout << "Enter the gender: ";
	cin >> gender;

	cout << "Enter the name: ";
	cin >> name;

	//refer to file
	ifstream fin(fname());

	if (fin.fail())
	{
		cout << " cant open file" << endl;
		return 0;
	}

	if (gender == male)
	{
		if (name == boyname)
		{
			cout << name << "is ranked: " << rank << "in" << year;
			return 0;
		}
	}

	if (gender == female)
	{
		if (name == girlname)
		{
			cout << name << "is ranked: " << rank << "in" << year;
			return 0;
		}
	}
	fin.close();

    return 0;
}

