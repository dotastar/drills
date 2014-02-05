#include <iostream>

using namespace std;

int &DoSomethingBad()
{
	int *nullPtr = 0;
	return *nullPtr;
}

int main()
{
	int &i = DoSomethingBad();

	(void)i;

        return 0;
}
