#include <cstdio>
#include <iostream>

using namespace std;

void f() {}
void g() {}

int main()
{
	printf("%p\n", f);
	printf("%p\n", &f);
	printf("%p\n", g);
	printf("%p\n", &g);
        return 0;
}
