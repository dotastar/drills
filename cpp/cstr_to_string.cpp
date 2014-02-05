#include <iostream>
#include <string>

using namespace std;

void f(const string &s)
{
}

int main()
{
	const char s[] = {'a', 'b', 'c', 0};
	f(s);
}
