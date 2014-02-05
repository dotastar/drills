#include <iostream>

class B;

class A {
public:
	A() { std::cout << "A()" << std::endl; }
	//explicit A(int) { std::cout << "A(int)" << std::endl; }
	//A& operator=(int) { std::cout << "operator=(int)" << std::endl; return *this; }
	//A& operator=(const A&) { std::cout << "operator=(const A&)" << std::endl; return *this; }
	//explicit A(const B&) { std::cout << "A(const B&)" << std::endl; }
	~A() { std::cout << "~A()" << std::endl; }
};

class B {
public:
	operator A() { std::cout << "B::operatorA()" << std::endl; return A(); }
};

int main()
{
	B b;
	A a = static_cast<A>(b);
}
