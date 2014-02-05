#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

class seq {
private:
	int c;
public:
	seq() : c(0) {}
	int operator() () { return c++; }
};

int main()
{
	generate_n(ostream_iterator<int>(cout, "\n"), 100, seq());
}
