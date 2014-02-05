#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>

using namespace std;

inline bool lt_nocase(char c1, char c2) { return tolower(c1) < tolower(c2); }

int main() 
{
	vector<int> a1 = {1, 3, 5, 7, 9, 11, 13};
	vector<int> a2 = {1, 1, 2, 3, 5, 8, 13};
	vector<char> a3 = {'A', 'b', 'b', 'B', 'B', 'f', 'h', 'H'};
	vector<char> a4 = {'A', 'B', 'B', 'C', 'D', 'F', 'F', 'H'};

	auto output = ostream_iterator<int>(cout, " ");
	cout << "A1 intersect A2: ";
	set_intersection(a1.begin(), a1.end(), a2.begin(), a2.end(), output);
	cout << endl;

	cout << "A3 intersect A4: ";
	set_intersection(a3.begin(), a3.end(), a4.begin(), a4.end(),
		ostream_iterator<char>(cout, " "), lt_nocase);
	cout << endl;
}
