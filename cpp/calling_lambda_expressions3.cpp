#include <iostream>

using namespace std;

int main()
{
	auto f = [] (int x, int y) { return x + y; };
	cout << f(21, 12) << endl;
}
