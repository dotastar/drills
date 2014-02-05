#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

#include "rng.h"
#include "binary_search.h"

int main()
{
	std::vector<int> vi;
	std::generate_n(std::back_inserter(vi), 30, wc::SimpleRNG<int>(1, 100));
	std::copy(vi.begin(), vi.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << "\n";
	std::sort(vi.begin(), vi.end());

	std::vector<int>::iterator it = wc::binary_search(vi.begin(), vi.end(), 50);
	if (it != vi.end()) {
		std::cout << "Found: " << *it << "\n";
	}
	else {
		std::cout << "Not Found." << "\n";
	}
        return 0;
}
