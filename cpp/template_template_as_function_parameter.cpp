#include <iostream>

template <typename T, template <typename> class C> 
T foo(size_t k, const C<T> &c, const C<T> &v) {
	return T();
}

template <typename T>
struct A {
};

int main()
{
	A<int> a;
	A<int> b;
	return foo<>(1, a, b);
}
