#include <iostream>

using namespace std;

class A {};
class B : public A {};
class C { public: int i; };
class D : public B { public: int i; };

int main()
{
	A a;
	B b;
	C c;
	D d;
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(d) << endl;
        return 0;
}
