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

void PrintPerson(Person p) {
    cout << ": " << p.first << " " << p.last << endl;
}

void ChangeLastName(Person &p, string lastName){
  string temp = p.last;
  p.last = lastName;
  lastName = temp;
}

int main() {
	// Create two instances of person here, and assign the names.
  
  Person a;
  Person b("Linus","Van Pelt");
  cout << "Person a";
  PrintPerson(a);
  cout << "Person b";
  PrintPerson(b);
  string lastName = "Torvalds";
  ChangeLastName(b, lastName);
  cout << "Person b";
  PrintPerson(b);

	return 0;
}
