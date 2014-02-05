#include <iostream>
#include <list>
#include <iterator>
#include <string>

using namespace std;

template<class T>
void disp_list(const string& s, const list<T>& l)
{
	cout << s << ": ";
	copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
	cout << "\n";
}

int main()
{
	list<string> l1;
	list<string> l2;

	l1.push_back("s1");
	l1.push_back("s2");
	l1.push_back("s3");
	l1.push_back("s4");

	l2.push_back("S1");
	l2.push_back("S2");
	l2.push_back("S3");
	l2.push_back("S4");

	cout << "Begin: \n";
	disp_list("l1", l1);
	disp_list("l2", l2);

	cout << "\n";
	cout << "l1.splice(l1.begin(), l2)\n";
	l1.splice(l1.begin(), l2);
	disp_list("l1", l1);
	disp_list("l2", l2);

	list<string>::iterator iter = l1.begin();
	++iter; ++iter; ++iter; ++iter;

	l1.splice(iter, l1, l1.begin());
	disp_list("l1", l1);

	l1.splice(l1.begin(), l1, iter);
	disp_list("l1", l1);

	l1.sort();
	disp_list("l1", l1);

	// list is cleared
	iter = l1.begin(); ++iter; ++iter;
	disp_list("l1", l1);

	// list is corrupted.
	l1.splice(l1.begin(), l1, l1.begin(), l1.end());
	// infinite loop
	disp_list("l1", l1);

        return 0;
}
