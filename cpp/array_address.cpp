#include <iostream>

using namespace std;

int main()
{
	int a[100];

	int *iptr = new int();
	cout << a << endl;
	cout << &a << endl;

	cout << iptr << endl;
	cout << &iptr << endl;

        return 0;
}
