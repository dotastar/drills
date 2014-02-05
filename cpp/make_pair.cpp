#include <string>
#include <map>

using namespace std;

int main()
{
	typedef multimap<int, string> IntStringMap;

	IntStringMap ismap;

	ismap.insert(make_pair(1, "abc"));

	return 0;
}
