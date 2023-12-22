#include<iostream>

using namespace std;

class num {
	int x;
public:
	num() {
		x = 5;
	}

	void display() const {
		cout << this << endl;
		cout << this->x << endl;
	}
};

int main() {
	num five;
	five.display();

	return 0;
}
