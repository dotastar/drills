#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <list>

using namespace std;

int main()
{
	vector<int> vec = {1, 2, 3, 4, 5};
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	list<int> lst(vec.size());
	reverse_copy(vec.begin(), vec.end(), lst.begin());
	copy(lst.begin(), lst.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}
