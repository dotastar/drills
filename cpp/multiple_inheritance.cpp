#include <iostream>

using namespace std;

class B {
public:
	B() { cout << "B()" << endl; }
	virtual ~B() { cout << "~B()" << endl; }
};

class BB {
public:
	BB() { cout << "BB()" << endl; }
	virtual ~BB() { cout << "~BB()" << endl; }
};

class A : public B, public BB {
public:
	A() { cout << "A()" << endl; }
	virtual ~A() { cout << "~A()" << endl; }
};

int main()
{
	A *a = new A();
	BB *bb = a;
	B *b = a;
	delete b;
}
