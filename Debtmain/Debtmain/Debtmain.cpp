// Debtmain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;



int main()
{
    Print_Welcome();
	get_acct_info();
	sort_info();
	print_sorted_list();
	get_contributions();
	process_snowball();
	Print_result();
	ask_save();



	return 0;

}

get_acct_info(const std::string & name, double amt_owe, double interest, double min_pay)
{
	char ch;
	static int i = 0;
	bank *a[10];
	int x, amt, k, j;
	do
	{
		cout << endl << endl << "************MENU************" << endl;
		cout << "            ----            " << endl;
		cout << "1.Create new account\n2.Apply payoff amount\n3. View estimated time remaining at the current contribution rate\n4.View account details\n\n";
		cout << "Enter choice no.: ";
		cin >> x;
		switch (x)
		{
		case 1:
		{
			i++;
			a[i] = new bank;
			a[i]->newaccount();
			break;
		}
		case 2:
		{
			cout << "Enter account name: ";
			cin >> k;
			a[k]->withdrawal();
			break;
		}
		case 3:
		{
			break;
		}
		case 4:
		{
			cout << "Enter account name: ";
			cin >> k;
			a[k]->viewaccdetails();
			break;
		}
		}cout << "\nDo you wish to continue[Press 'Y' to continue or 'N' to exit menu]: ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
}


void bank::withdrawal()
{
	int contribution;
	cout << "Enter amount to be paid this month: ";
	cin >> contribution;
	if (balance <= contribution)
		//make code to drain remaining balance then apply the rest to next account balance
	else
		balance = balance - contribution;
}

void bank::newaccount()
{
	accnumber++;
	ai.getdetails();
	balance = 0;
}
void bank::viewaccdetails()
{
	cout << endl << endl << "*********ASSIGNMENT BANK ACCOUNT DETAILS*********" << endl;
	cout << "         --- ---- ------- -------         " << endl;
	cout << "Account name: " << name << endl;
	cout << "Name: " << d.name << endl;
	cout << "Branch: " << ai.branch << endl;
	cout << "City: " << d.city << endl;
	cout << "Current Balance: " << balance << endl;
	cout << "_________________________________________" << endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
