#include <string>

using namespace std;

template <class T1, class T2>
class combo {
public:
	T1 t1;
	T2 t2;
	combo() : t1(), t2() {}
	combo(const T1 &t1_, const T2 &t2_) : t1(t1_), t2(t2_) {}
};

template <class T1, class T2>
combo<T1, T2> make_combo(T1 t1, T2 t2)
{
	return combo<T1, T2>(t1, t2);
}

template<class T1, class T2> void f(combo<T1, T2> input)
{
}

template<class T1, class T2> void g(pair<T1, T2> input)
{
}

int main()
{
	//f(make_combo<int, string>(1, "abc"));
	f(make_combo(1, "abc"));
	g(make_pair(1, "abc"));
}
