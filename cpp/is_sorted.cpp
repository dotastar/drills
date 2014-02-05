#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

using namespace std;

int main()
{
	int A[] = {1, 4, 2, 8, 5, 7};
	const int N = sizeof(A) / sizeof(int);

	cout << is_sorted(A, A + N);
	cout << endl;
	
	sort(A, A + N);
	cout << is_sorted(A, A + N);
	cout << endl;
}
