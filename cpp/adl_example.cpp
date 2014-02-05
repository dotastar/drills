#include <iostream>

namespace utility
{
    template <typename T>
    void print(T x)
    {
        std::cout << x << std::endl;
    }

    template <typename T>
    void print_n(T x, unsigned n)
    {
        for (unsigned i = 0; i < n; ++i)
            utility::print(x);
    }
}

namespace my_stuff
{
    struct unicorn { /* unicorn stuff goes here */ };

    std::ostream& operator<<(std::ostream& os, unicorn x) { return os; }

    // Don't ever call this!  It just crashes!  I don't know why I wrote it!
    void print(unicorn) { std::cout << "my_stuff::print(unicorn)" << std::endl; }
}

int main()
{
    my_stuff::unicorn x;
    utility::print_n(x, 4);
}
