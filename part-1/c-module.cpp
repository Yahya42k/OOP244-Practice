#include<iostream>
#include"Transaction.h"
#define NO_TRANSACTIONS 3

using namespace std;

int main() {
	int i;
	struct Transaction tr;

	for (int i = 0; i <NO_TRANSACTIONS; i++)
	{
		enter(&tr);
		display(&tr);

	}
	

	return 0;
}