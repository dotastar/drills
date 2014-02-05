#include <iostream>

using namespace std;

void f1(int x)
{
	cout << "f1(int)" << endl;
}

void f1(double d)
{
	cout << "f1(double)" << endl;
}

int main()
{
	extern void f1(int);
	f1(4.5);
}
