#include <iostream>


int main()
{

	int a[5] = { 1,2,3,4,5};
	int (*p)[5] = &a;

	std::cout << (*p)[1] << std::endl;
	std::cout << p << std::endl;


	return 0;
}
