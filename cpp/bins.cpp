#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec = { 1, 2, 3, 3, 3, 5, 8 };
	for (int i = 1; i <= 10; ++i) {
		cout << "Searching for " << i << ": "
		<< (binary_search(vec.begin(), vec.end(), i) ? "present" : "not present") << endl;
	}
}
