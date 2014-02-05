#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	back_insert_iterator<vector<int> > bii(v);
	back_insert_iterator<vector<int> > bii2(v);
	*bii = 0;
	++bii;
	*bii = 1;
	*bii2 = -1;
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}
