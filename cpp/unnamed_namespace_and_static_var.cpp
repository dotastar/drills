#include <iostream>

namespace {
	static int n;
}

namespace A {
	namespace {
		static int n;
	}
}

using namespace A;

int main()
{
	n = 0; // reference to 'n' is ambiguous
        return 0;
}
