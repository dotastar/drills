#include <iostream>
#include <string>

using namespace std;

#if 0
void f(string s)
{
	cout << "calling f(string s)" << endl;
}
#endif

#if 0
void f(const char *s)
{
	cout << "calling f(const char *s)" << endl;
}
#endif

#if 0
template <class T>
T f(T s)
{
	cout << "calling f(T)" << endl;
	cout << sizeof(T) << endl;
	return s;
}
#endif

void f(const pair<int, string> &s)
{
}

int main()
{
	//make_pair(1, "abc");
	//make_pair<int, const char *>(1, "abc");
	f(make_pair(1, "abc"));
}
