//CS2_HW4_ex01 (11.1)
//Madelyn Carlson
//6/6/18

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int arrSz;
int avg;

void getAvg()
{
	int sum;

	sum = sum + arrSz;

	avg = (sum / arrSz);
}

int main()
{
	int num;
	int * ptr = &num;
	
	cout << "Enter the array size: " << endl;
	cin >> arrSz;

	int * num = arrSz();

	//initialize array
	for (int i = 0; i < 10; i++)
		cout << num[i] << endl;

	//call average
	int (*ptr).getAvg();

		if(num > avg)

		delete[] ptr;

    return 0;
}

