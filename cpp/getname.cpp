#include <string>
#include <iostream>

using namespace std;

class A {
public:
	A() : m("") { cout << "A()" << endl; }
	A(const char *s) : m(s) { cout << "A(s)" << endl; }
	~A() { cout << "~A()" << endl; }
	//operator const string() { return m; }
	operator const char * () const { return m.c_str(); }
private:
	string m;
};

A getA(const char *s)
{
	return A(s);
}

int main()
{
	const A &a= getA("123");
	//cout << static_cast<const char *>(a) << endl;
	cout << a << endl;
}
