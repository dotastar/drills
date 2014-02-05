//
// Initializing an object with temporary objects constructed on-the-fly
// could be confused with funtion declaration. 
//
#include <iostream>

using namespace std;

class A {
public:
	A() { cout << "A()" << endl; };
};

template <class T>
class TC {
public:
	TC(const T& t) { cout << "TC(T t)" << endl; }
};

int main()
{
	TC<A> tca((A()));
	TC<A> tca_decl(A());
        return 0;
}
