//
// Example from "The C++ Standard Library - A Tutorial and Reference."
//
// In 6.2.1 Common Container Operations:
//   Don't forget the extra parentheses around the initializer arguments here.
//   ... c declares a function with a return type that is deque<int>.
//   Its first parameter is of type istream_iterator<int> with the name
//   cin, and its second unnamed parameter is of type "function taking
//   no arguments returning istream_iterator<int>."
//
#include <iostream>
#include <iterator>
#include <algorithm>
#include <deque>

using namespace std;

int main()
{
	// g++ (4.2.1 and 4.7) accepted this line and generated intended code.
	// clang++ (3.1) didn't compile: parameter declarator cannot be qualified
	std::deque<int> c(std::istream_iterator<int>(std::cin), std::istream_iterator<int>());

	copy(c.begin(), c.end(), ostream_iterator<int>(cout, " "));
	cout << "\n";
        return 0;
}
