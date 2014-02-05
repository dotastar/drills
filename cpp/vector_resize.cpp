#include <iostream>
#include <vector>

using namespace std;

class A {
public:
	// Default ctor must exists although it is not called at runtime.
	// Comment out next line then compilation fails.
	A() { cout << "A() @ " << this << endl; }

	A(int i) { cout << "A(i) @ " << this << endl; }
	//A(const A& a) { cout << "A() @ " << this << " <= " << &a << endl; }
	~A() { cout << "~A() @ " << this << endl; }
};
int main()
{
	vector<A> va;
	A a(1);
	va.push_back(a);
	va.push_back(a);
	va.push_back(a);
	va.push_back(a);
	va.push_back(a);
	va.push_back(a);
	va.push_back(a);
	va.push_back(a);

	va.resize(5);

        return 0;
}
