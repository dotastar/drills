#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

class Nth {
private:
	int nth;
	int cnt;
public:
	Nth(int n) : nth(n), cnt(0) {}
	bool operator() (int) { return ++cnt == nth; }
};

int main()
{
	vector<int> vec;
	for (int i = 1; i <= 9; ++i) {
		vec.push_back(i);
	}
	vector<int>::iterator iter;
	iter = remove_if(vec.begin(), vec.end(), Nth(3));
	vec.erase(iter, vec.end());
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}
