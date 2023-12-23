#include<iostream>

int main() {

	int x = 5;
	int y = 6;

	//constant pointer.
	// read as ptr is a constant pointer to an integer.
	int* const ptr = &x;

	// we cannot ptr=&y;

	// but we can *ptr=6;

	return 0;
}