//Madelyn Carlson
//HW1
//5/23/18

/*EX01_10 - a) CPU
			b) RAM
			c) Main Memory
			d) A binary diget
			e) Address
			f) 8
			g) allocates resouces like memory to programs that are running
			h) any software that runs with the support of the operating system
*/

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
using namespace std;

//ex02

//void function
void ex02()
{
	//declaring the variable hasPassedTest
	bool hasPassedTest = true;

	//declare x and y initialized to random numbers 
	int x = rand() % 1000;
	int y = rand() % 1000;
	//output whether or not x >= y
	if (x >= y)
		cout << "The value of X is >= to Y: " << x << endl;

	//declare variable numberOfShares and ask user for input
	double numberOfShares;
		cout << "Enter a value: " << endl;
		cin >> numberOfShares;
		//display depending on if value is < 100
		if (numberOfShares < 100)
			cout << "The number of shares is less than 100. " << endl;
		else
			cout << "The number of shares is not less than 100. " << endl;

		//declare variables
		int box;
		int book;
		int ans;
		//display if box is evenly divisible by book
		cout << "Enter a box width: " << endl;
		cin >> box;
		cout << "Enter a book width: " << endl;
		cin >> book;
		ans = box / book;

		if (ans = 2)
			cout << "The answer is an integer so the box width is evenly divisible by the book width." << endl;

		//declare variables
		double life;
		double temp;
		cout << "Enter the shelf life of a box of chocolates: " << endl; 
		cin >> life;
		cout << "Enter the outside temperature: " << endl;
		cin >> temp;
	//decrease the shelf life by 4 if outside temp is > 90
		if (temp > 90)
			cout << "Decrease the shelf life by 4. " << endl;
}

//ex03

//void function
void ex03()
{
	//declare variables
	double area;
	double length;
	double side;
	//ask user for area
	cout << "Enter the area of a square: " << endl;
	cin >> area;
	//calculate length of diagonal
	side = sqrt(area);
	length = sqrt(side * 2);
	cout << "The length of the diagonal of the square is: " << endl;
	cin >> length;

	//declare char variables
	char y;
	char n;
	char value;
	cout << "Enter yes (y) or no (n)" << endl;
	cin >> value;
	//displaying yes or no
	if (value == 'y')
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	//tab character
	char tab;
	cout << '\ttab' << endl;

	//declare string variable and ask user to enter their address
	string mailingAddress;
	cout << "Enter your mailing address: " << endl;

	//initialize string variable to empty string
	string a = "Empty String";
}

//ex04

//e)
int val(int num)
{
	int result;
	result = num * 2;
	return result;
}


void ex04()
{
	int num = 0;
	cout << "Enter a number between 1 and 10: " << endl;
	cin >> num;
	//while loop until correct 
	while (num < 10)
	{
		cout << num << endl;
		++num;
	}
	//determining the sum of the cubes
	double sum;
	sum = num * 3;

	//do-while 
	do {
		cout << "*";
		num++;
	} while (num < 10);

	//for loop
	int i;
	for (i = 0; i < 40; i++)
		if (i % 2)
		{
			cout << i << endl;
		}

	//call integer function (val)
	int answer;
	answer = val(num);
}

//add function
int add(int a, int b)
{
	int sum;
	sum = a + b;

	return sum;
}

//add one function
int one(int &c)
{
	int sum;
	sum = c + 1;
	return sum;
}


//ex05

//void function
void ex05()
{
	//stores in an array
	const int size = 5;
	int digits[size];
	//asking user for integers
	cout << "Enter 5 integers: " << endl;
	//finding sum and product of integers
	int product;
	int sum;
	cout << "Sum of integers: " << endl;
	cin >> sum;
	cout << "Product of integers: " << endl;
	cin >> product;

}

//size of an array
int arr[] = { 4, 5, 6, 7 };
int m, fin = 0;

//array with user giving value
int arra[] = { 8, 9, 0, 1 };
int d, final = 0;


int main()
{
	//call array
	for (m = 0; m < 4; m++)
	{
		fin = arr[m];
	}
	cout << fin;

	//call array with user giving value
	cout << "Enter a value: " << endl;
	final = arra[d];
	cout << final;

	//call ex02
	cout << ex02 << endl;

	//call ex03
	cout << ex03 << endl;

	//call ex04
	cout << ex04 << endl;

	//call ex05 
	cout << ex05 << endl;

    return 0;
}

