#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

class is_even {
public:
	bool operator() (int i) { return !(i % 2); }
};

int main()
{
	vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
	stable_partition(vec.begin(), vec.end(), is_even());
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}
