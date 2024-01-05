#include<iostream>

using namespace std;


int main() {

	int x;

	cout << "Enter the no of stars on your inverted triangle pattern: ";
	cin >> x;

	for (size_t i = 0; i < x; i++)
	{
		for (size_t j = i; j < x; j++)
		{
			cout << "* ";
		}cout << endl;
	}
	

	return 0;
}