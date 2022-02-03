#include <iostream>
using namespace std;

// Put the person struct here
struct Person{
  string first;
  string last;
};





int main() {
	// Create two instances of person here, and assign the names.
  Person a;
  a.first = "Dorian";
  a.last = "Gray";

  Person b;
  b.first = "Charlie";
  b.last = "Brown";



	// Add the prints here
  cout << "Person a: " << a.first << " " << a.last << endl;
  cout << "Person b: " << b.first << " " << b.last << endl;



	return 0;
}
