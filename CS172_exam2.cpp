// I affirm that all code given below was written solely by me, Madelyn, and that any help I received adhered to the rules stated for this exam.

// CS172_exam2
// Madelyn Carlson
// 6/19/18

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <algorithm>
using namespace std;

vector<string> runner;

//runner class with functions
class Runner
{
public:
	string get_firstname();
	{
		return firstname;
	}

	string get_lastname();
	{
		return lastname;
	}

	int get_pace();
	{
		return pace;
	}

private:
	string firstname;
	string lastname;
	int pace;
	int race;
};

//read in the file for first names and last names
void readrunners(int pace, vector<string>& firstname, vector<string>& lastname)
{
	stringstream race;
	race << "registrants" << pace << ".txt";
	string file = race.str();
	
	ifstream infile(file);
	string firstnames, lastnames;

//read names until they are all read
	int num;

	while (infile >> num)
	{
		infile >> firstnames;
		infile >> lastnames;
		firstname.push_back(firstnames);
		lastname.push_back(lastnames);
	}
}


int main()
{
	int pace;

	vector<string> firstname;

	vector<string> lastname;

	//opening file for input
	ifstream fin;
	fin.open("registrant.txt");

	//checking to see if it is successful
	if (fin.fail())
	{
		cout << "Can't open file." << endl;
		return 0;
	}

	//get a whole line at a time and detect end of file
	string line;
	
	while (getline(fin, line))
	{
		cout << line << endl;
	}

	fin.close();

	//sorting given information
	std::sort(pace.begin(firstname, lastname), pace.end(firstname, lastname));

	for (string &race : pace)
		cout << race << " " << endl;

	//calling get functions
	string get_firstname();

	string get_lastname();

	int get_pace();

	//reading information based on given table
	if (pace >= 0 && pace <= 360)
		cout << "White" << endl;

	if (pace > 360 && pace <= 420)
		cout << "Yellow" << endl;
	
	if (pace > 420 && pace <= 480)
		cout << "Green" << endl;

	if (pace > 480 && pace <= 540)
		cout << "Orange" << endl;

	if (pace > 540 && pace <= 600)
		cout << "Blue" << endl;

	if (pace > 600 && pace <= 720)
		cout << "Lilac" << endl;

	if (pace > 720 && pace <= 1200)
		cout << "Red" << endl;

	readrunners(pace, firstname, lastname)

    return 0;
}

