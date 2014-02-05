#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
	string m_strName;
public:
	Animal(const string &strName) : m_strName(strName) {}
	string GetName() { return m_strName; }
	virtual const char *Speak() = 0;
};

class Cat : public Animal
{
public:
	Cat(const string &strName) : Animal(strName) {}
	virtual const char *Speak() { return "Meow"; }
};

class Dog : public Animal
{
public:
	Dog(const string &strName) : Animal(strName) {}
	virtual const char *Speak() { return "Woof"; }
};

int main()
{
	Cat mycat("Yellow");
	Dog mydog("Black");

	Animal &rAnimal = mycat;
	rAnimal = mydog;
	//mydog = rAnimal;

	cout << rAnimal.Speak() << endl;

	return 0;
}
