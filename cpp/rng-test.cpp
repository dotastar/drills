#include <stdlib.h>
#include <sys/time.h>
#include <limits>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <vector>
#include "rng.h"

using namespace std;
using namespace wc;

int main()
{
	SimpleRNG<int> rng(1, 10);
	std::vector<int> hist(11, 0);
	for (size_t i = 0; i < 10000; ++i) {
		int r = rng();
		if (r < 1 || r > 10) {
			throw std::domain_error("Bad random");
		}
		++hist[r];
	}

	for (size_t i = 0; i < hist.size(); ++i) {
		std::cout << i << ": " << hist[i] << "\n";
	}

	SimpleRNG<double> rng2(0.0, 3.0);
	for (size_t i = 0; i < 10; ++i) {
		std::cout << rng2() << "\n";
	}

	return 0;
}
