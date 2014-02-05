#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <string>

using namespace std;

class Person {
private:
	string name;
public:
	Person(const string &_name) : name(_name) {}
	void print() const { cout << name << endl; }
	void printWithPrefix (string prefix) const {
		cout << prefix << name << endl;
	}
};

void foo(const vector<Person>& persons)
{
	for_each(persons.begin(), persons.end(), mem_fun_ref(&Person::print));
	for_each(persons.begin(), persons.end(), bind2nd(mem_fun_ref(&Person::printWithPrefix), "person: "));
}

int main()
{
	vector<Person> persons;
	persons.push_back(Person("Wang"));
	persons.push_back(Person("Ming"));
	foo(persons);
}
