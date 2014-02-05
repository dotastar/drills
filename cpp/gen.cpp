#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	vector<int> vec(12);
	generate(vec.begin(), vec.end(), rand);
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, "\n"));
}

#if 0
int main()
{
	vector<int> vec;

	insert_iterator<vector<int> > iter (vec, vec.begin());

	generate_n(iter, 10, rand);

	for (auto iter = vec.begin(); iter != vec.end(); ++iter) {
		cout << *iter << endl;
	}
}
#endif
