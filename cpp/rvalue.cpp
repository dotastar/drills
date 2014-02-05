#include <iostream>

using namespace std;

struct A {
	A& operator=(const A&) { return *this; }
};

void func(A&) {}

int main()
{
	func(A() = A());
}
