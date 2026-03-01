#include <iostream>
using namespace std;

class Student { // class definition
public:         //in public access specifier, members are accessible outside the class
	int Rollno;   // data members
	string Name;

	void display()  // member function
	{
		cout << "Roll no: " << Rollno << endl << "Name: " << Name << endl;
	}

};
int main()
{
	Student s1;   // object creation
	s1.Rollno = 100;   // accessing data members and assigning values
	s1.Name = "Ali";
	s1.display();  // accessing member function to display values
	return 0;

}
