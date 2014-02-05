#include <iostream>
#include <string>
using namespace std;




int main()
{

	char	buf1[]="Hello";
	char	buf2[]="Goodday";

	char *pb1=buf1;
	char *pb2=buf2;

//	*pb1++=*++pb2;

	*pb1++=++*pb2;


	cout<<buf1<<endl;
	cout<<buf2<<endl;
	cout<<pb1<<endl;
	cout<<pb2<<endl;



	return 0;

}






