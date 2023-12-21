#include<iostream>
#include "tester.h"
#include"calculator.h"

using namespace std;

int testSuite(int BASE, int EXPONENT, int RESULT)
{
	int passed = 0;
	int result;
	result = power(BASE, EXPONENT);
	if (result==RESULT)
	{
		cout << "RAISED to power test passed. " << endl;
		passed++;

	}
	else {
		cout << "RAISED to power test failed. " << endl;
	}

	result = exponent(RESULT, BASE);
	if (result==EXPONENT)
	{
		cout << "Find exponent test passed ."<<endl;
			passed++;
	}
	else {
		cout << "Find exponent test Failed."<<endl;
		
	}
	return passed;
}
