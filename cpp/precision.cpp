#include <iostream>
#include <iomanip>

int main()
{
	double a = 421.0;
	double b = 0.0123456789;

	std::cout << std::setprecision(2);
	std::cout << a << std::endl;
	std::cout << std::setprecision(2);
	std::cout << b << std::endl;

	std::cout << std::setprecision(6);
	std::cout << a << std::endl;
	std::cout << std::setprecision(6);
	std::cout << b << std::endl;
}
