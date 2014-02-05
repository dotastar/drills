#include <iostream>
#include <cassert>

bool is_palindrome(int n) {
	assert(n >= 0);
	int k = 1;
	while (n / k >= 10)
		k *= 10;

	while (k > 1)  {
		int h = n / k;
		int t = n % 10;
		if (h != t)
			return false;
		n = (n % k) / 10;
		k /= 100;
	}
	return true;

}

int main()
{
	int n[] = {0, 1, 2, 9, 10, 11, 12, 19, 20, 21, 22, 45, 55, 99, 100, 101, 199, 191, 1000, 1001, 100010001, 123321, 1234321};
	size_t nn = sizeof(n) / sizeof(int); 

	for (size_t i = 0; i < nn; ++i)
		std::cout << n[i] << ": " << is_palindrome(n[i]) << "\n";

        return 0;
}
