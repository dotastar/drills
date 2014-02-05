#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

// need c++11

using namespace std;

int main()
{
	vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8};
	random_shuffle(vec.begin(), vec.end());
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}
