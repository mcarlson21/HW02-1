// CS2_HW6_ex02 (13.2)
// Madelyn Carlson
// 6/14/18

#include "stdafx.h"
#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	ifstream fin;

	fin.open("file.name");

	//checking to see if fail
	if (fin.fail())
	{
		cout << "cant open file" << endl;
		return 0;
	}

	//counting the number of characters
	int count = 0;

	while (!fin.eof())
	{
		get.fin();
		count++;
	}

	//display number of characters
	cout << "There are" << count << "characters." << endl;

	//close the file
	fin.close();

    return 0;
}

