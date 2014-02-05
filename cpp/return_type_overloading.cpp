#include <iostream>
#include <typeinfo>

using namespace std;


class A {
};

class B {
};

void g(const A &a)
{
	cout << "g(const A&)" << endl;
}

void h(const B &a)
{
	cout << "h(const B&)" << endl;
}

template<class T> T f() { cout << "f()->" << typeid(T).name() << endl; return T(); }

int main()
{
	g(f<A>());
	h(f<B>());
        return 0;
}
