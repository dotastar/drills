#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <algorithm>

int main()
{
	// TEST 1
	int x = 1, y = 2;
	std::stringstream ss;
	ss << x;
	ss << y;
	std::cout << ss << std::endl;

#if 0
	// TEST 2
	std::ostringstream os;
	std::istringstream is;
	os.str(0);
	is.str("istring");
	std::cout << is.rdbuf() << std::endl;
#endif

	// TEST 3 iterator
	std::istringstream str("0.1 0.2 0.3 0.4");
	std::copy(std::istream_iterator<double>(str),
		  std::istream_iterator<double>(),
		  std::ostream_iterator<double>(std::cout, " "));
	std::cout << "\n";

        return 0;
}
