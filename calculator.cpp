#include <iostream>
using namespace std;
 
class test
{
    public:int x,y,sum;
            float fsum;
    void first()
    {
        cout<<"Enter first number\n";
    }
    void second()
    {
        cout<<"Enter second number\n";
    }
    int add()
    {
        sum=x+y;
        cout<<sum;
    }
 };

int main()
{
    test z;
    int choice;
    cout<<"1.Addition\n2.Subtraction\n3.Multiplication\n4.Divition\n";
    cin>>choice;
    switch (choice){
        case 1:
		z.first();
        cin>>z.x;
        z.second();
        cin>>z.y;
        z.add();
        break;

         case 2:
         

         case 3:
      

         case 4:

         
	 default:
		cout<<"invalid entry";
		break;

           }
return 0;
}

