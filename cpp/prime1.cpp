#include <list>
#include <iostream>

using namespace std;

bool isPrime(int number)
{
	if (number < 0) number = -number;
	if (number == 0) return false;
	if (number == 1) return true;

	int divisor;
	for (divisor = number / 2; number % divisor != 0; --divisor)
		;
	return (divisor == 1);
}

int main()
{
	list<int> l;
	//int i;
	for (int i = 20; i < 100; ++i)
		l.push_back(i);

	list<int>::iterator iter = find_if(l.begin(), l.end(), isPrime);
	if (iter != l.end()) {
		cout << *iter << endl;
	}
        return 0;
}
