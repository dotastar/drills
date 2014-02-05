#include <vector>

using namespace std;

struct F {
        vector<double>& v;
        F(vector<double>& vv) :v(vv) { }
        void operator()() {};
};

int main()
{
	vector<double> vec;
	F f(vec);
}
