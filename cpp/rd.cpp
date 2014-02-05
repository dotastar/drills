// redirecting cout's output
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream ifs("infile.txt");
	ofstream ofs("outfile.txt");

	streambuf *old_inbuf = ifs.rdbuf();
	streambuf *old_outbuf = ofs.rdbuf();

	cout << "inbuf: " << (void*)old_inbuf << endl;
	cout << "outbuf: " << (void*)old_outbuf << endl;

	ifs.ios::rdbuf(old_outbuf);

	cout << "inbuf: " << (void*)ifs.rdbuf() << endl;
	cout << "outbuf: " << (void*)ofs.rdbuf() << endl;

	cout << "inbuf: " << (void*)ifs.ios::rdbuf() << endl;
	cout << "outbuf: " << (void*)ofs.ios::rdbuf() << endl;
}
	

#if 0
int main () {
	streambuf *psbuf, *backup;
	ofstream filestr;
	filestr.open ("test.txt");

	backup = cout.rdbuf();     // back up cout's streambuf

	psbuf = filestr.rdbuf();   // get file's streambuf
	cout.rdbuf(psbuf);         // assign streambuf to cout

	cout << "This is written to the file";

	cout.rdbuf(backup);        // restore cout's original streambuf

	filestr.close();

	return 0;
}
#endif
