// CS2_HW5_ex05 (12.25)
// Madelyn Carlson
// 6/12/18

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//account class
class Account
{
public:

	string name;
	double balance;
	double annualInterestRate;

};

//transaction class
class Transaction
{
public:
	vector<Transaction> transactions;
	
	//private
private:
	double amount;
	double balance;
	string description;
};

//withdraw function
int withdraw();
{
	cout << "120" << endl;
}

//deposit function
int deposit();
{
	cout << "-11" << endl;
}

int main()
{
	double annualInterestRate();
	{
		cout << "Interest rate is: 1.5%" << endl;
	}

	double balance();
	{
		cout << "Balance is: 1000" << endl;
	}

	string name();
	{
		cout << "Name is George" << endl;
	}
    return 0;
}

