#include<iostream>

int main() {

	int x = 5;
	int y = 6;


	// ptr is constant pointer to constant integer.
	const int* const ptr = &x;


	//we cant do ptr=&y and also *ptr=6;
	return 0;
}