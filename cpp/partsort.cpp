#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

int main()
{
	int A[] = {7, 2, 6, 11, 9, 3, 12, 10, 8, 4, 1, 5};
#if 0
	const int N = sizeof(A) / sizeof(int);

	partial_sort(A, A + 5, A + N);
	copy(A, A + N, ostream_iterator<int>(cout, " "));

	cout << endl;
#endif

	const int N = sizeof(A) / sizeof(int);

	vector<int> V(4);
	partial_sort_copy(A, A + N, V.begin(), V.end());
	copy(V.begin(), V.end(), ostream_iterator<int>(cout, " "));

	cout << endl;
}
