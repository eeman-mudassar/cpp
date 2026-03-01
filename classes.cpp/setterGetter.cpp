#include <iostream>
using namespace std;

class Student {

	int Rollno;       //private data member
public:
	                      //setter function
	void setter(int r)
	{
		Rollno = r;
	}
	int getter()     //getter function
	{
		return Rollno;
	}

	~Student()  //destructor
	{
		cout << "Destructor Called" << endl;
	}
};


int main()
{
	Student s1;
	s1.setter(100);   //setting value using setter function
	cout << "Roll No: " << s1.getter() << endl;    // getting value using getter function
	return 0;

}
