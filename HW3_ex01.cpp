// Program: HW3 ex03_01
// Name: Madelyn Carlson
// Date: 5/29/18

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

/*UML diagram
class: Fan

properties: int speed;
	bool on;
	double radius
behaviors: 
getSpeed
getRadius
*/

class Fan
{
public:
	int speed;
	bool on;
	double radius;

	//constructor
		Fan::fan()
	{
			speed = 1;
			radius = 5;
	}
		//fan object
		Fan(double newRadius, int newSpeed)
		{
			radius = newRadius;
			speed = newSpeed;
		}

		//return speed
		double getSpeed()
		{
			return speed;
		}

		//return radius
		int getRadius()
		{
			return radius;
		}

};

int main()
{
	//creating object for radius
	Fan fan1(10);
	Fan fan2(5);

	cout << "The radius of the fan " << fan1.radius << "is " << fan1.getRadius() << endl;
	cout << "The radius of the fan " << fan2.radius << "is " << fan2.getRadius() << endl;

	//creating object for speed
	Fan fan1(3);
	Fan fan2(2);

	cout << "The speed of the fan " << fan1.speed << "is " << fan1.getSpeed() << endl;
	cout << "The speed of the fan " << fan2.speed << "is " << fan2.getSpeed() << endl;
	
    return 0;
}

