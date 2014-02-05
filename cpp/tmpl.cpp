#include <iostream>

using namespace std;

#if 0
template<typename T>
void f(T t)
{
	cout << "f(T): " << t << endl;
}

void f(double d)
{
	cout << "f(double): " << d << endl;
}

int main()
{
	f<>(2.0);
}
#endif

template<class T>
void f(T)
{
	cout << "f(T)" << endl;
}

template<>
void f<>(int *)
{
	cout << "f(int *)" << endl;
}

template<class T>
void f(T *)
{
	cout << "f(T *)" << endl;
}

int main()
{
	int *p = 0;

	f<int *>(p);
}
