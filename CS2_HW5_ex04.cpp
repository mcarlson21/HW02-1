// CS2_HW5_ex04 (12.20)
// Madelyn Carlson
// 6/12/18

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template<typename T>

//shuffle function
void shuffle(vector<T>& v)
{
	//random number generator
	srand(time(NULL));

	int n = rand() % v.size;

	v[n] = v[i];
}


int j

int main()
{
	vector<int> v;

	cout << "Enter 10 integers: " << endl;

	for (int i = 0; i < 10; i++)
	{
		cin >> j;
		v.push_back(j);
	}
	//call shuffle function
	shuffle(v);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] <<  " " << endl;


    return 0;
}

