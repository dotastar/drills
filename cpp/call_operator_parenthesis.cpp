#include <iostream>

using namespace std;

template<class T>
class square {
public:
	T operator()(T x) { return x * x; }
};

int main()
{
	square<double> sd;
	cout << sd.operator()(2.2) << endl;
	return 0;
}
