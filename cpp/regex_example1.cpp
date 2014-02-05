#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
	string input;
	regex integer("(\\+|-)?[[:digit:]]+");
	while (cin) {
		input.clear();
		cout << "Give me an integer:" << endl;
		if (cin >> input) {
			if (regex_match(input, integer))
				cout << "It is an integer." << endl;
			else
				cout << "It is invalid." << endl;
		}
	}
        return 0;
}
