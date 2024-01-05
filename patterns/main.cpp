#include<iostream>

using namespace std;


int main() {

	int x;

	cout << "Enter the rows for  digit triangle: ";
	cin >> x;
	

	for (size_t i = 1; i <= x; i++)
	{
		for (size_t j = i; j >0 ; j--)
		{
			cout << j << " ";
			
		}cout << endl;
	}


	return 0;
}