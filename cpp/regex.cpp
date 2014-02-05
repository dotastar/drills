#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(int argc, char *argv[])
{
	if (argc < 2) {
		return 0;
	}

	try {
		regex r(argv[1]);
		string input;
		if (cin >> input) {
			if (regex_match(input, r))
				cout << input << endl;
		}
	} catch (const std::regex_error &e) {
		cerr << "Cannot compile regex: " << e.what() << endl;
		return 1;
	}

        return 0;
}
