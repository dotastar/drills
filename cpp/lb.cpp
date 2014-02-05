#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	vector<int> vec = {1, 2, 3, 3, 4, 5};
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	for (int i = 0; i < 10; ++i) {
		auto p = upper_bound(vec.begin(), vec.end(), i);
		if (p != vec.end()) {
			cout << "i = " << i << ", lower_bound @ " << p - vec.begin() << " = " << *p << endl;
		} else {
			cout << "i = " << i << ", lower_bound off the end" << endl;
		}
	}
}
