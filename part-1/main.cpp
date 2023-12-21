#include<iostream>
#include"tester.h"
using namespace std;

int main() {
	
	int passed = 0;
	passed += testSuite(5, 3, 125);
	passed += testSuite(5, -3, 0.008);
	cout << passed << " TEST PASSED " << endl;
	

	return 0;
}