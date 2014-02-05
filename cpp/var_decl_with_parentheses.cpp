//
// It seems x and (x) are different in terms of their decl_type, but int x and int (x) declare the same variable.
//
#include <iostream>

using namespace std;

void f(int (x))
{
	cout << x << endl;
}

int main()
{
	int (x) = 111;
	cout << x << endl;
	f(x);
        return 0;
}
