#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

class IntSequence {
private:
	int value;
public:
	IntSequence(int initVal) : value(initVal) {}
	int operator()() { return value++; }
};

int main()
{
	vector<int> vec;
	IntSequence seq(1);
	generate_n(back_inserter(vec), 4, seq);
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	generate(++vec.begin(), --vec.end(), IntSequence(42));
	copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}
