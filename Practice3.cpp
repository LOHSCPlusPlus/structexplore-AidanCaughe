#include <iostream>
using namespace std;

// Put the person struct here
struct Person{
  string first;
  string last;
  Person();
  Person(string firstName, string lastName);
};


Person::Person() {
	// Normally, you do not print in a constructor
	first = "unknown";
	last = "unknown";
}

Person::Person(string firstName, string lastName){
  first = firstName;
  last = lastName;
}
int main() {
	// Create two instances of person here, and assign the names.
  
  Person a;
  Person b("Linus","Van Pelt");
  cout << "Person a: " << a.first << " " << a.last << endl;
  cout << "Person b: " << b.first << " " << b.last << endl;


	return 0;
}
