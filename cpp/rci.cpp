#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>
#include <vector>
#include <iterator>
#include <functional>

using namespace std;

struct checkRem : std::unary_function<int,bool> {
    bool operator()(int aVal){ return (aVal > 0);}
};

int main( int argc, char** argv )
{
	int _vIn[] = {1,2,-3,4,-2,3,4,-3,6,7};
	std::vector<int> vIn( _vIn, _vIn + (sizeof( _vIn )/sizeof(_vIn[0])));
	copy(vIn.begin(), vIn.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// remove with copy
	std::vector<int> vOut;
	std::back_insert_iterator<std::vector<int> > bit(vOut);

	std::remove_copy_if(
	    vIn.begin(),
	    vIn.end(),
	    bit,
	    checkRem()
	);

	copy(vIn.begin(), vIn.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	copy(vOut.begin(), vOut.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
}
