#include <iostream>

using namespace std;

void f(int i)
{
	cout << "calling f(int)" << endl;
}

#if 0
void f(const int &i)
{
	cout << "calling f(const int &)" << endl;
}
#endif

void f(int &i)
{
	cout << "calling f(int &)" << endl;
}

int main()
{
	int i = 1;
	
	f(i);
}
