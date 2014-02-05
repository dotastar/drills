#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> a = {3, 2, 1, 6, 5, 4};
	make_heap(a.begin(), a.end());
	cout << "Heap: ";
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	pop_heap(a.begin(), a.end());
	cout << "Pop Heap: ";
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	sort_heap(a.begin(), a.end());
	cout << "Sort Heap: ";
	copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}

