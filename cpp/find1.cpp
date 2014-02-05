#include <iostream>
#include <vector>
#include <set>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

template<class T>
class is_any_of {
private:
	set<T> elem;
public:
	is_any_of(const T& i1) {
		elem.insert(i1);
	}
	is_any_of(const T& i1, const T& i2) {
		elem.insert(i1);
		elem.insert(i2);
	}
	is_any_of(const set<T> &s) : elem(s) {}
	is_any_of(const vector<T> &v) : elem(v.begin(), v.end()) {}
	bool operator()(const T& i) {
		return (elem.find(i) != elem.end());
	}
};

int main()
{
	list<int> l;
	list<int>::iterator iter;

	for (int i = 20; i <= 40; ++i)
		l.push_back(i);

	iter = find(l.begin(), l.end(), 3);

	if (iter != l.end())
		cout << "found: " << *iter << "\n";
	else
		cout << "not found" << "\n";

	reverse(l.begin(), l.end());

	copy(l.begin(), l.end(), ostream_iterator<int>(cout, " "));
	cout << "\n";

	iter = find_if(l.begin(), l.end(), is_any_of<int>(25, 35));

	if (iter != l.end()) {
		list<int>::iterator iter_2 = l.end();

		switch (*iter) {
		case 25:
			iter_2 = find(iter, l.end(), 35); break;
		case 35:
			iter_2 = find(iter, l.end(), 25); break;
		}

		if (iter_2 != l.end()) {
			list<int>::iterator me = max_element(iter, iter_2);
			if (me == iter_2)
				cout << "max: not found\n";
			else
				cout << "max: " << *me << "\n";
		}
	}

        return 0;
}
