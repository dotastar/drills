#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
	vector<int> vec1 = {1, 3, 5, 7};
	vector<int> vec2 = {2, 4, 6, 8};

	merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}
