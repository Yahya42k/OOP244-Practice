#include<iostream>
#include"Transaction.h"

using namespace std;

void enter(Transaction* tr) {

	cout << "Enter your account Information" << endl;
	cout << "Enter the account number: ";
	cin >> tr->acct;
	cout << "Enter account type :";
	cin >> tr->type;
	cout << "Enter  the account amount: ";
	cin >> tr->amount;
}

void display(const Transaction* tr) {

	cout << "Account number : " << tr->acct<<endl;
	cout << "Account type   : " << ((tr->type=='d')?"Debit $":"Credit $") << endl;
	cout << "Account Amount : " << tr->amount << endl;

}
