#include <iostream>
using namespace std;

// Put the person struct here
struct Person{
  string first;
  string last;
  Person();
};


Person::Person() {
	// Normally, you do not print in a constructor
	first = "unknown";
	last = "unknown";
}


int main() {
	// Create two instances of person here, and assign the names.
  
  Person a;
  Person b;
  cout << "Person a: " << a.first << " " << a.last << endl;
  cout << "Person b: " << b.first << " " << b.last << endl;
  a.first = "Dorian";
  a.last = "Gray";
  b.first = "Charlie";
  b.last = "Brown";

	// Add the prints here
  cout << "Person a: " << a.first << " " << a.last << endl;
  cout << "Person b: " << b.first << " " << b.last << endl;



	return 0;
}
