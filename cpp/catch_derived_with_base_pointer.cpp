#include <iostream>

using namespace std;

class B {
};

class D : public B {
};

int main()
{
	try {
		D *d = new D;
		throw d;
	}
	catch (B *b) {
		cout << "Caught *b" << endl;
	}
	catch (D *d) {
		cout << "Caught *d" << endl;
	}
        return 0;
}
