#include <vector>
#include <thread>

// need c++11

void f()
{
}

struct F {
	void operator()(){};
};

int main()
{
	std::thread t1{f};	// f() executes in separate thread
	std::thread t2{F()};	// F()() executes in separate thread

	t1.join();
	t2.join();
}


#if 0
using namespace std;

void f(vector<double>&)
{
}

struct F {
	vector<double>& v;
	F(vector<double>& vv) :v(vv) { }
	void operator()() {};
};

int main()
{
	vector<double> some_vec;

	//std::thread t1{std::bind(f,some_vec)};	// f(some_vec) executes in separate thread
	std::thread t2{F(some_vec)};		// F(some_vec)() executes in separate thread

	//t1.join();
	//t2.join();
}
#endif
