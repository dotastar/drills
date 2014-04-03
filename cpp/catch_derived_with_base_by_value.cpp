#include <iostream>

using namespace std;

struct B {
	B() { cout << "B()" << endl; }
	virtual void foo() { cout << "B::foo()" << endl; }
};

struct D : public B {
	D() { cout << "D()" << endl; }
	virtual void foo() { cout << "D::foo()" << endl; }
};

int main() {
	try {
		throw D();
	}
	catch (B b) {
		b.foo();
	}
	return 0;
}
