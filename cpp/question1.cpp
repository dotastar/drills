#include <iostream>
#include <string>
using namespace std;

class base
{
public:
	virtual void foo()
	{cout<<"Base"<<endl;}
};


class derived:public base
{
public:
	virtual void foo()
	{cout<<"Derived"<<endl;}
};


void bar(base bb)
{bb.foo(); }

void baz(base &br)
{br.foo(); }

int main()
{
	base *b=new derived;

	derived d;

	b->foo();

	bar(*b);

	bar(d);

	baz(*b);

	baz(d);

	delete b;

	return 0;

}
