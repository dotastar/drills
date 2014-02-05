#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

int main()
{
	vector<int> v = {50, -10, 20, -30};

	std::sort(v.begin(), v.end());	// the default sort
	// now v should be { -30, -10, 20, 50 }

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// sort by absolute value:
	std::sort(v.begin(), v.end(), [](int a, int b) { return abs(a)<abs(b); });
	// now v should be { -10, 20, -30, 50 }

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}
