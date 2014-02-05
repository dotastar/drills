#include <iostream>

using namespace std;

class A {
public:
	int i;
	A() { i = 1; cout << "A()" << endl; }
	A(const A &a) { i = a.i + 1; cout << "A(A&)" << endl; }
	A(const A &&a) = delete;
	A(A &&a) = delete;
};


int main() {
	A c{A()};
	cout << c.i << endl;
	return 0;
}
