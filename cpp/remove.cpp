#include <iostream>
#include <iterator>
#include <algorithm>
#include <list>
#include <functional>
#include <ext/functional>

using namespace std;

int main()
{
	list<int> li = {1, 101, 102, 501, 999, 1001, 1002, 3, 4, 5, 5000};
	list<int>::iterator new_end = remove_if(li.begin(), li.end(),
		__gnu_cxx::compose2(logical_and<bool>(), bind2nd(greater<int>(), 100),
			bind2nd(less<int>(), 1000)));
	li.erase(new_end, li.end());
	copy(li.begin(), li.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}
