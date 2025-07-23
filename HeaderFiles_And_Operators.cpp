//System Header File: That Comes With the Compiler.
#include<iostream>
/* User-Defined Header File: It is written by the programmer. Now this will produce an error if i uncomment it because this.h is not present in the current directory.
this.h */ 
using namespace std;
int main()
{
    /*
    Operators.
    Different Type Of Operators.
    */

    // A) Arithimatic Operators: 
    int a = 2;
    int b = 3;
    cout<<"Sum of a and b is: " <<a + b <<endl;
    cout<<"Sub of a and b is: " <<a - b <<endl;
    cout<<"Mul of a and b is: " <<a * b <<endl;
    cout<<"Div of a and b is: " <<a / b <<endl;
    cout<<"Mod of a and b is: " <<a % b <<endl;
    cout<<"Inc of a: "          <<a++   <<endl;
    cout<<"Inc of a: "          <<a     <<endl;
    cout<<"Dec of a: "          <<a--   <<endl;
    cout<<"Dec of a: "          <<a     <<endl;
    cout<<"Post Inc of a is: "  <<++a   <<endl;
    cout<<"Post Dec of a is: "  <<--a   <<endl;
    cout<< endl;

    // B) Assigment Operators: Used to assign values to Variables.
    int x;
    int c = 6;
    cout<<"The Value of C is: "<< c << endl;
    x = c+=2;
    cout<<"The Value is: "     << x << endl;
    x = c-=2;
    cout<<"The Value is: "     << x << endl;
    x = c*=2;
    cout<<"The Value is: "     << x << endl;
    x = c/=2;
    cout<<"The Value is: "     << x << endl;
    x = c%2;
    cout<<"The Value is: "     << x << endl;
    x = c&2;
    cout<<"The Value is: "     << x << endl;
    x  =c|2;
    cout<<"The Value is: "     << x << endl;
    x = c^2;
    cout<<"The Value is: "     << x << endl;
    x = c>>=6;
    cout<<"The Value is: "     << x << endl;
    x = c<<=4;
    cout<<"The Value is: "     << x << endl;
    cout<< endl;

    //Comparison OPerators: Used to compare to values(or Variables).
    int d                       = 5;
    int e                       = 7;
    int equal_to                = d == e;
    int not_equalTo             = d != e;
    int greater                 = d > e;
    int less                    = d < e;
    int greaterthan_equalTo     = d >= e;
    int lessthan_equalTo        = d <= e;
    cout<< equal_to             << endl;
    cout<< not_equalTo          << endl;
    cout<< greater              << endl;
    cout<< less                 << endl;
    cout<< greaterthan_equalTo  << endl;
    cout<<   (d <= e)   << endl; //use round brackets here.
    cout<< endl;

    //Logical Operators: As with comparison we can also test for True(1) or False(0) values with Logical Operators.
    int f = 3;
    int g = 1;
    cout<<  (f < g && g > f) << endl;
    cout<<  (f > g || g > f) << endl;
    cout<< !(f < g && g > f) << endl;
    
    return 0;
}
