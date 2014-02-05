#include <iostream>

using namespace std;

class PrintHelloWorld {
public:
	PrintHelloWorld() { cout << "Hello World!" << endl; }
};

PrintHelloWorld phw;

int main()
{
	cout << "main()" << endl;
        return 0;
}
