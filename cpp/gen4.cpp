#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec = {-21, 4, 0, 8, 5, 0, 1};
	remove_copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "), 0);
	cout << endl;
}
