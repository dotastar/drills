#include <iostream>

using namespace std;

int main() {
	try {
		throw 2.0;
	}
	catch (float f) {
		cout << "Caught " << f << endl;
	}
	catch (double f) {
		cout << "Caught " << f << endl;
	}
	return 0;
}
