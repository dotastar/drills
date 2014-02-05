// stl / mmap1.cpp

#include <iostream>
#include <map>
#include <string>

using namespace std;

int 
main()
{
	//type of the collection
	typedef multimap<int, string> IntStringMMap;
	IntStringMMap   coll; //set container for int /string values

	// insert some elements in arbitrary order
	// -a value with key 1 gets inserted twice
	coll.insert(pair<int, string>(5, "tagged"));
	coll.insert(pair<int, string>(2, "a"));
	coll.insert(pair<int, string>(1, "this"));
	coll.insert(pair<int, string>(4, "of"));
	coll.insert(pair<int, string>(6, "strings"));
	coll.insert(pair<int, string>(1, "is"));
	coll.insert(pair<int, string>(3, "multimap"));
	string s("123");
	coll.insert(make_pair(3, s));

	/*
	 * print all element values - iterate over all elements - element
	 * member second is the value
	 */
	IntStringMMap::iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos) {
		cout << pos->second << ' ';
	}
	cout << endl;
}
