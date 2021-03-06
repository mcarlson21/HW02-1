// Final_project_CS172 
// Madelyn Carlson
// 6/28/18

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> person;

//within the job class, seperating the public from private based on what information it is
class job
{
public:

	string person;
	string question;
	int time;
	int a;

private:

	string answer;

	//functions getting information from the person being interviewed
	int get_time()
	{
		return time;
	}

	string get_answer()
	{
		return answer;
	}

	string get_question()
	{
		return question;
	}

	string get_person()
	{
		return person;
	}
};

//inheritance
class person: public job
{
	//base class, job, sharing information with the derived class, person, through inheritance
public:
	int selection;

private:

	string name;
	int number;

	string get_name()
	{
		cout << "Enter your name: " << endl;
			return name;
	}

	int get_number()
	{
		cout << "Enter your number: " << endl;
		return number;
	}
};

	//reading into a vector, info, to show the person's information

	void readinfo(int info, vector<string>& name, vector<int>& number)
	{

		stringstream info;
		person << "applicants" << info << ".txt";
		string file = info.str();

		ifstream infile(file);
		string people, numbers;

		//read names until they are all read
		int num;

		while (infile >> num)
		{
			infile >> people;
			infile >> numbers;
			name.push_back(people);
			number.push_back(numbers);
		}
	}

	//reading into a vector, person, to show the person's answers
	void readperson(int selection, vector<string>& question, vector<int>& time)
	{
		stringstream selection;
		person << "applicants" << selection << ".txt";
		string file = selection.str();

		ifstream infile(file);
		string questions, times;

		//read names until they are all read
		int num;

		while (infile >> num)
		{
			infile >> questions;
			infile >> times;
			question.push_back(questions);
			time.push_back(times);
		}
	}

	//get a whole line at a time and close the file
	string line;

	while (getline(fin, line))
	{
		cout << line << endl;
	}

	fin.close();

	//sorting given information
	std::sort(selection.begin(name, number), selection.end(name, number));

	for (string &info : selection)
	{
		cout << info << " " << endl;
	}

int main()
{
	int selection;
	vector<string> name;
	vector<int> number;
	vector<string> question;
	vector<int> time;

	//checking for failure

	if (file.fail())
	{
		cout << "Can't open file." << endl;
		return 0;
	}

	//calling get functions
	string get_name()

	int get_number()
	
	int get_time()

	string get_answer()

	string get_question()

	string get_person()

	std::cout << "Names: ";
	ifstream file;
	file.open("applicants");
	file << " ";
	file.close;

    return 0;
}

