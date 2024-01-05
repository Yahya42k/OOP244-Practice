#include<iostream>
using namespace std;

int main() {

	int a = 0, b = 1,x=0;
	cout << "Enter the number of digits you want to see the fibonacci series :";
	cin >> x;

	cout << a << " " << b << " ";
	for (size_t i = 0; i < x; i++)
	{
		int nextNum = a + b;

		cout << nextNum << " ";

		a = b;
		b = nextNum;

	}

	return 0;
}