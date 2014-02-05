/*
 * How to call virtual function of base class.
 */
#include <iostream>

using namespace std;

class B {
public:
	virtual void f(void) { cout << "B::f" << endl; }
};

class D : public B {
public:
	virtual void f(void) { cout << "D::f" << endl; }
};

int main()
{
	D *d = new D;
	B *b = d;

	d->B::f();
	d->D::f();
	// b->D::f(); // compile error
}
