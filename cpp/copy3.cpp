#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{

	if (argc < 2) {
		cerr << "Usage: " << argv[0] << " filename" << endl;
		return -1; 
	}
	ifstream ifs(argv[1]);
	if (!ifs) {
		cerr << "Failed to open " << argv[1] << endl;
		return -1;
	}
	vector<string> vec;

	copy(istream_iterator<string>(ifs), istream_iterator<string>(), back_inserter(vec));
	copy(vec.begin(), vec.end(), ostream_iterator<string>(cout, "\n"));
	sort(vec.begin(), vec.end());
	unique_copy(vec.begin(), vec.end(), ostream_iterator<string>(cout, " "));
	cout << "\n";

        return 0;
}
