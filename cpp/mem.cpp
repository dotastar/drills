#include <iostream>

using namespace std;

struct ST {
	int i;
	double d;
};

struct ST f(void)
{
	struct ST st = {13, 3.14};

	return st;
}

int main()
{
	// f().i = 12;
}
