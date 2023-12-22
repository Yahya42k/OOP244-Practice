#include<iostream>

//function overloading
//Distinguishing features
// funtion identifier, parameter type(ignore const or address qualifier)
//the order of parameter types.

using namespace std;

void display(int x);

void display(const int* x,int n);

int main()
{
	auto x = 20;
	int a[] = { 1,2,3,4,5,6 };

	display(x);
	display(a, 6);


	return 0;
}

void display(int x) {

	cout << x << endl;
}

void display(const int* x, int n) {

	for (int i = 0; i < n; i++)
	{
		cout << x[i] << " ";
	}cout << endl;
}