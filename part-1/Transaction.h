#ifndef TRANSACTION_H
#define TRANSACTION_H

struct Transaction {

	int acct;
	char type;
	double amount;
};

void enter( Transaction* tr);
void display(const  Transaction* tr);




#endif