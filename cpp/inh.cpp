#include <iostream>

using namespace std;

struct B {
	void f(double) { cout << "B::f(double)" << endl; }
	void g(void) { cout << "B::g(void)" << endl; }
};

struct D : B {
	void f(int) { cout << "D::f(int)" << endl; }
};

int main()
{
	B b;
	D d;

	b.f(4.5);
	d.f(4.5);
	d.g();
}
