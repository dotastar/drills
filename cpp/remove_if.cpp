// remove_if example
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool IsOdd (int i) { return ((i%2)==1); }

int main () {
	vector<int> myints;
	for (int i = 1; i <= 9; ++i) {
		myints.push_back(i);
	}
	for (vector<int>::const_iterator iter = myints.begin(); iter != myints.end(); ++iter)
		cout << " " << *iter;
	cout << endl;

	vector<int>::iterator pend = remove_if(myints.begin(), myints.end(), IsOdd);
	(void)pend;
	cout << "range contains:";
	for (vector<int>::const_iterator iter = myints.begin(); iter != myints.end(); ++iter)
		cout << " " << *iter;
	cout << endl;
}
