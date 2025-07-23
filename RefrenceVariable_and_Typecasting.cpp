#include<iostream>
using namespace std;
int num1=13;
int main()
{
    /*
    //Built in Data Types.
    int num1 , num2 , sum;
    cout<<"Enter the value of num 1: ";
    cin>>num1;
    cout<<"Enter the value of num 2: ";
    cin>>num2;
    sum = num1 + num2;
    cout<< "Your Sum is: " << sum <<endl;
    sum = ::num1 + num2; //Here we use Scope Resolution Operator " :: "  to Access Global Varible num1.
    cout<< "Your Sum is: " << sum <<endl;
    
    //Float , Double , And Long_Double Literals.
    float num = 23.4;
    cout<< num <<endl;
    cout<< "The size of 23.4 num         is: " << sizeof(num)   << endl;
    cout<< "The size of 23.4 Float       is: " << sizeof(23.4f) << endl; // F and f are same that is Float.
    cout<< "The size of 23.4 Long Double is: " << sizeof(23.4l) << endl; // L and l are same that is Long double.
    cout<< "The size of 23.4 float       is: " << sizeof(23.4F) << endl;    
    cout<< "The size of 23.4 Long Double is: " << sizeof(23.4L) << endl;      

    //Refrence Variables:
    A reference variable is an alias (another name) for an existing variable. It doesn’t create a new copy of the variable; instead, it refers to the same memory location
    int   r1 = 12;
    cout<< "The Value of r1 is: " << r1 << endl;
    int & r2 = r1;
    cout<< "The Value of r2 is: " << r2 << endl;
    */
    //Type Casting.
    int   t1  = 12;
    float t2  = 35.2;
    float   sum = t1 + t2;
    cout<< "The value of sum is: "          << sum                     << endl;
    cout<< "The Value of TypeCast sum is: " << t1         + double(t2) << endl;
    cout<< "The Value of TypeCast sum is: " << float(t1)  + t2         << endl;
    cout<< "The Value of TypeCast sum is: " << (double)t1 + t2         << endl;
    cout<< "The Value of TypeCast sum is: " << t1         + int(t2)    << endl;

    return 0;
}