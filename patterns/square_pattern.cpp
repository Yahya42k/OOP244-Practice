#include<iostream>

using namespace std;


int main() {

	int x;

	cout << "Enter the no of stars on your sqaure star pattern: ";
	cin >> x;

	for (size_t i = 0; i < x; i++)
	{
		for (size_t j = 0; j < x; j++)
		{
			cout << "* ";
		}cout << endl;

	}

	return 0;
}