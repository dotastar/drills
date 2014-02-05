#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class myadder : public unary_function<double, void> {
public:
	myadder() : sum(0) {}
	void operator () (double x) { sum += x; }
	operator double () { return sum; }
private:
	double sum;
};

int main()
{
	vector<double> vec = {-1.0, 0.0, 1.1, 2.2, 3.3};
	myadder result = for_each(vec.begin(), vec.end(), myadder());
	cout << "The sum is " << result << endl;
}
