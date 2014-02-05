#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

struct less_mag : public binary_function<double, double, bool> {
	bool operator () (double x, double y) { return fabs(x) < fabs(y); }
};


int main()
{
	vector<double> vec = {1.0, -2.2, 10.1, -1.5, 5.0, 3.14, -10.3, 100.7};
	sort(vec.begin(), vec.end(), less_mag());
	copy(vec.begin(), vec.end(), ostream_iterator<double>(cout, "\n"));
}
