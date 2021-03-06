// Program: HW3 ex03_02
// Name: Madelyn Carlson
// Date: 5/29/18

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

/*UML diagram
class: QuadraticEquation

{Properties: int a, b, c
discriminant
root

Behavior: 
calculate roots
user input
*/

double discriminant = (pow(b, 2) - 4 * a * c);
double root1;
double root2;

class QuadraticEquation
{
public:
	int a;
	int b;
	int c;

	//constructor
	QuadraticEquation(a, b, c);

	//get functions
	int getA()
	{
		return a;
	}

	int getB()
	{
		return b;
	}

	int getC()
	{
		return c;
	}

	//discriminate function
	 double getDiscriminant()
	{
		 if (discriminant > 0)
			 return discriminant;
		 else
			 return 0;
	}

	 //root functions
	double getRoot1()
	 {
		return root1;
	 }

	double getRoot2()
	{
		return root2;
	}
};
	



int main()
{
	cout << "Enter a value for a: ";
	cin a;
	cout << "Enter a value for b: ";
	cin b;
	cout << "Enter a value for c: ";
	cin c;

	double getDiscriminant();
	if (discriminant > 0)
	{
		cout << "Root 1 is: ";
		cin >> root1;
		cout << "Root 2 is: ";
		cin >> root2;

		if (discriminant == 0)
			cout << "Root 1 is: ";
		cin >> root1;

		else
			cout << "The equation has no real roots";
	}
    return 0;
}

