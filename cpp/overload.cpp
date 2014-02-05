#include <iostream>
#include <string>

using namespace std;

class X {
};

class B {
public:
	void f(const X &x) { cout << "B:f(const X&)" << endl; }
	void f(double x) { cout << "B:f(double)" << endl; }
};

class D: public B {
public:
	void f() { cout << "D:f()" << endl; }
};

int main()
{
	D d;
	X x;
	d.f();
	//d.f(1.0);
}
