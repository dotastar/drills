#include <iostream>
#include <utility>
#include <map>

using namespace std;

class A {
public:
	void insert(const pair<int, string> &v) {}
};

void f(const pair<int, string> &p)
{
	cout << p.second << "\n";
}

int main()
{
	std::map<int, string> ismap;
	
	cout << sizeof(make_pair(1, "abcd1234567890").second) << endl;
	f(make_pair(1, "abcd1234567890"));

        return 0;
}
