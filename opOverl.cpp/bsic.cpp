#include<iostream>
using namespace std;

class add
{

  public:
	int num;
		
	add(int n)
	{
			num=n;
		}
  add operator +(add &obj) //operator overloading for addition
   {
      return add(num+obj.num);
	  }		
		
};

int main()
{
	add a1(10),a2(20);
	add result=a1+a2; //using the overloaded + operator to add a1 and a2
	cout<<"Sum :"<<result.num;
	return 0;
}
