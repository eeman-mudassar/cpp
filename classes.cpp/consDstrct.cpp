#include <iostream>
using namespace std;

class Gadget {    

	string Name;
public:
	Gadget()  // Default constructor
	{
		Name = "";
		cout << "Default Gadget called" << endl;
	}
	Gadget(string n)   // Parameterized constructor
	{
		Name = n;
		cout << "Gadget " << Name << " created" << endl;
	}
	~Gadget()         // Destructor
	{
		cout << "Gadget " << Name << " destroyed" << endl;
	}
};


int main()
{
	Gadget g1;
	Gadget g2("Alpha");  // g2 is created but not destroyed until the end of main
	Gadget g3("Beta");  // g3 is created but not destroyed until the end of main
	return 0;
}
// Output:
// Default Gadget called
// Gadget Alpha created	
// Gadget Beta created
// Gadget Beta destroyed
// Gadget Alpha destroyed
// Explanation:
// In this code, we have a class `Gadget` with a default constructor, a parameterized constructor, and a destructor.
// In the `main` function, we create three `Gadget` objects: `g1`, `g2`, and `g3`.
// - `g1` is created using the default constructor, which initializes its name to an empty string and prints "Default Gadget called".
// - `g2` is created using the parameterized constructor with the name "Alpha", which prints "Gadget Alpha created".
// - `g3` is created using the parameterized constructor with the name "Beta", which prints "Gadget Beta created".
// When the `main` function ends, the destructors for `g3`, `g2`, and `g1` are called in reverse order of their creation.
// - The destructor for `g3` is called first, printing "Gadget Beta destroyed".
// - The destructor for `g2` is called next, printing "Gadget Alpha destroyed".
// - Finally, the destructor for `g1` is called, printing "Gadget  destroyed" (since its name is an empty string).
//
/*Note: The output may vary based on the order of destruction, but typically it will be in reverse order of creation.*/
