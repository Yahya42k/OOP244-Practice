#include<iostream>

using namespace std;


int main() {

	int x;

	cout << "Enter the reverse digit square: ";
	cin >> x;
	int count = 1;

	for (size_t i = 0; i < x; i++)
	{
		for (size_t j = 0; j < x; j++)
		{
			cout << count << " ";
			count++;
		}cout << endl;
	}


	return 0;
}