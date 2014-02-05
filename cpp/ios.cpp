#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	//fstream fstr("test1.txt", ios_base::in|ios_base::out|ios_base::trunc);
	fstream fstr("test1.txt", ios_base::in|ios_base::out|ios_base::app);
	char buf[32]; buf[31] = '\0';
	char puf[] = "hello world\n";

	cout << "read:" << endl;
	fstr.get(buf, sizeof(buf)-1);
	if (!fstr.good()) {
		cout << "stream status: " << fstr.rdstate() << endl;
		if (fstr.eof())
			fstr.clear();
	}

	cout << "write:" << endl;
	fstr << puf;
	if (!fstr.good())
		cout << "stream status: " << fstr.rdstate() << endl;
}
