#include <iostream>

using namespace std;

class B {
public:
	virtual void Method() { cout << "B:Method()" << endl; }
};

class C : B {
};

class D : public C {
public:
	virtual void Method() { cout << "D::Method()" << endl; }
};

int main()
{
	D d;
	B *b = &d; // cannot cast 'D' to its private base class 'B'
	b->Method();
        return 0;
}
