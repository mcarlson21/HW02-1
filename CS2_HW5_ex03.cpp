// CS2_HW5_ex03 (12.8)
// Madelyn Carlson
// 6/12/18

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> v;

template <typename T>

//define vector class
class Vector
{
public:
	//add item
	void push_back(T value);
	{
		elements[num++] = value;
	}
	
	//remove item
	void pop_back();
	{
		num--;
	}

	const T size();

	const at(index: T);
	
	//empty
	const T empty();
	{
		return num == 0;
	}

	//clear items
	void clear();

	//swap items
	void swap(v2: vector)
};

int main()
{
	//call functions
	cout << v.push_back(T value) << endl;

	cout << v.pop_back() << endl;

	cout << v.empty() << endl;

	cout << v.clear() << endl;

	cout << v.swap(v2: vector) << endl;

    return 0;
}

