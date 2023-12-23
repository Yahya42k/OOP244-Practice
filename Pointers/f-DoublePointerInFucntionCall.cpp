#include<iostream>

// when we pass pointer to the function as pointer we can only change the value 
// it is pointing to but we cannot change the pointer.

// in order to fix this we pass double pointer or pointer to pointer in the function call.
int b = 2;
void foo(int** x) {

	

	*x = &b;
}

int main() {

	int x = 5;
	
	int* ptr = &x;

	std::cout << "The value ptr is pointing to  before the function call : " << *ptr << std::endl;

	foo(&ptr);

	std::cout << "The value ptr is pointing to  after the function call : " << *ptr << std::endl;

	
	return 0;
}