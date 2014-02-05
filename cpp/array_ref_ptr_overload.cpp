#include <iostream>

using namespace std;

#if 0
void f(const char (&a)[4])
{
	cout << "calling f(char (&a)[4])" << endl;
}

void f(const char *a)
{
	cout << "calling f(const char *)" << endl;
}
#endif

template<class T>
void f(const T& x)
{
	cout << "sizeof(x): " << sizeof(x) << endl;
}

#if 0
template<class T>
void f(T x)
{
	cout << "sizeof(x): " << sizeof(x) << endl;
}
#endif

int main()
{
	
	const char *s = "abcdefghijklmnopqrstuvwxyz";
	char str[27] = "abcdefghijklmnopqrstuvwxyz";
	f(s);
	f(str);
}
