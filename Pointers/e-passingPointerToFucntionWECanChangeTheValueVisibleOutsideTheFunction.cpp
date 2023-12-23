#include<iostream>

// when we pass pointer to the function as pointer we can only change the value 
// it is pointing to but we cannot change the pointer.

void foo(int* x) {

	int b = 2;

	*x = b;
}

int main() {

	int x = 5;

	int* ptr = &x;

	std::cout << "The value ptr is pointing to  before the function call : " << *ptr << std::endl;

	foo(ptr);

	std::cout << "The value ptr is pointing to  after the function call : " << *ptr << std::endl;

	
	return 0;
}