#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
	int array[10];

	cout << typeid(array).name() << endl;

        return 0;
}
