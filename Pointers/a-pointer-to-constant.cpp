#include<iostream>



int main() {


	int x = 5;
	int y = 6;

	// pointer to constant 
	// reading of the pointer takes from right to left.
	//ptr is an integer pointer which is a constant
	const int* ptr = &x;

	//we cannot *ptr= 76;
	//but we can ptr=&y;


	return 0;
}