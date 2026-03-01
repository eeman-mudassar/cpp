#include <iostream>
using namespace std;

class Student {          // Class definition
private:                 // Access specifier
	int Rollno;            // Data members
	string Name;
public:
	Student(int r, string n)   // Parameterized constructor
	{
		Rollno = r;
		Name = n;
	}
	void display()             // Member function to display student details
	{
	   cout << "Roll no:" << Rollno << endl << "Name" << Name << endl;
	}

};
int main()
{
	Student s1(100, "Ali");
	s1.display();             // Calling member function to display details of student s1
	return 0;

}
