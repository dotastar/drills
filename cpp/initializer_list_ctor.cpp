#include <iostream>
#include <vector>

using namespace std;

class A {
public:
	A() {
		cout << "A()" << endl;
	}
	A(int i) {
		cout << "A(" << i << ")" << endl;
	}
	A(int i, int j) {
		cout << "A(" << i << ", " << j << ")" << endl;
	}
	A(int i, const string &s) {
		cout << "A(" << i << ", " << s << ")" << endl;
	}
	A(initializer_list<int> ili) {
		cout << "A({";
		for (auto x : ili)
			cout << x << ", ";
		cout << "})" << endl;
	}
	//A(initializer_list<char> ild) {}
};

int main()
{
	A a0{}; // always try default ctor first. if no default ctor, try initializer_list ctor.
	A a01(1); // always use non-initializer list ctor
	A a02{1}; // try initializer_list first
	A a1(1, 2); // always use non-initializer list ctor
	A a2{1.0, 2.0}; // try initializer_list first, does not prevent narrowing.
	A a3{1, "abc"}; // not a initializer_list
	A a4{{}}; // try initializer_list ctor first, then other ctor.
	A a5({1, 2});
        return 0;
}
