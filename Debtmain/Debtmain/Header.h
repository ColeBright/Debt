#pragma once
#include "string.h"
#include <iostream>

class acctinfo
{
private:
	std::string name;
	double amt_owe;
	double interest;
	double min_pay;

public:

	void getdetails(const std::string & name, double amt_owe, double interest, double min_pay);
	{
		name = new char[20];
		cout << endl << endl << "**********Customer Details*********** " << endl;
		cout << "          -------- -------            " << endl;
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Balance: ";
		cin >> amt_owe;
		cout << "Enter Interest: ";
		cin >> interest;
		cout << "Enter minimun monthly payment: ";
		cin >> min_pay;

	}
};
class process
{
private:

	long balance;
	acctinfo ai;
	void getdata();
	process transfermoney(process);
	void withdrawal();
	void newaccount();
	void viewaccdetails();
};