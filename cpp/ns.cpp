namespace myspace {
	class MyFile {
	};
	void f(const MyFile &mf) {}
}

using myspace::MyFile;

int main()
{
	MyFile my;
	f(my);
}
