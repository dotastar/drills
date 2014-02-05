#include <iostream>

using namespace std;

template<class T> size_t get_ref_size(T t)
{
	return sizeof(t);
}

template<class T> size_t get_size(const T &t)
{
	return sizeof(t);
	//return get_ref_size(t);
}

int main()
{
	//char a[10];
	const char *str= "abcefghijklmnopqrstuvwxyz01234567890";
	//cout << get_size<>("abcefghijklmnopqrstuvwxyz01234567890") << endl;
	cout << get_size(str) << endl;

	return 0;
}
