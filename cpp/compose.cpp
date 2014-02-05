#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <cassert>
#include <cmath>
#include <functional>
#include <ext/functional>

using namespace std;

double mysin(double x)
{
	return sin(x);
}

int main()
{
	vector<double> angles = {0, 30, 45, 60, 90, 180};
	vector<double> sines(angles.size());
	const double pi = 3.14159265358979323846;
	assert(sines.size() >= angles.size());
	transform(angles.begin(), angles.end(), sines.begin(),
		__gnu_cxx::compose1(negate<double>(),
					__gnu_cxx::compose1(ptr_fun(mysin),
								bind2nd(multiplies<double>(), pi / 180.0))));
	copy(sines.begin(), sines.end(), ostream_iterator<double>(cout, " "));
	cout << endl;
}
