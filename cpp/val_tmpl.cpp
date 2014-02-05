#include <iostream>

using namespace std;

template <class T, const char *str>
class MyClass {
public:
	void output() { cout << str << endl; }
};

char *p = "abc";
const char ce[] = {'a', 'b', 'c', '\0'};
char e[] = {'a', 'b', 'c', '\0'};
int main()
{
	char l[] = {'a', 'b', 'c', '\0'};
	// MyClass<double, l> mc; // no linkage
	// MyClass<double, p> mc; // must have address taken ???
	// MyClass<double, ce> mc; // no linkage ???
	MyClass<double, e> mc; // OK
	mc.output();
}
