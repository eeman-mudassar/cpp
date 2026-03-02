#include <iostream>
using namespace std;

class Gadget{

	string Name; 
    public:
	Gadget()
	{
		Name="";
		cout<<"Default Gadget called" <<endl;
	}
	Gadget(string n)
    {
    	Name=n;
    	cout<<"Gadget " <<Name <<" created"<< endl;
	}
	 ~Gadget()
    {
        cout << "Gadget " <<Name <<" destroyed" << endl;
    }
};
		

int main()
{
	Gadget g1; 
	Gadget g2("Alpha"); 
	Gadget g3("Beta"); 
	return 0; 	
}
