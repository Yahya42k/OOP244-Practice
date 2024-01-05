#include<iostream>

using namespace std;


int main() {

	int x;

	cout << "Enter the reverse digit square: ";
	cin >> x;

	for (size_t i = 0; i < x; i++)
	{
		for (size_t j =x; j >0; j--)
		{
			cout << j<<" ";
		}cout << endl;
	}
	

	return 0;
}