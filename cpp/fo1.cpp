#include <iostream>
#include <iterator>
#include <set>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
	set<int, greater<int> > si;
	deque<int> di;

	for (int i = 1; i <= 9; ++i)
		si.insert(i);

	copy(si.begin(), si.end(), ostream_iterator<int>(cout, " "));
	cout << "\n";

	transform(si.begin(), si.end(), back_inserter(di), bind1st(multiplies<int>(), 10));
	copy(di.begin(), di.end(), ostream_iterator<int>(cout, " "));
	cout << "\n";

	replace_if(di.begin(), di.end(), bind2nd(equal_to<int>(), 70), 42);
	copy(di.begin(), di.end(), ostream_iterator<int>(cout, " "));
	cout << "\n";

	deque<int>::iterator di_iter;
	di_iter = remove_if(di.begin(), di.end(), bind2nd(less<int>(), 50));
	di.erase(di_iter, di.end());
	copy(di.begin(), di.end(), ostream_iterator<int>(cout, " "));
	cout << "\n";

        return 0;
}
