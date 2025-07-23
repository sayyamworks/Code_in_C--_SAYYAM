//System Header File: That Comes With the Compiler.
#include<iostream>
/* User-Defined Header File: It is written by the programmer. Now this will produce an error if i uncomment it because this.h is not present in the current directory.
this.h */ 
using namespace std;
int main()
{
    //Operators.
    //Different Type Of Operators.
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

    // B) Assigment Operators: Used to assign values.
    int c = 6;
    cout<<" The Value of C is: "<< c << endl;
    a = c+=2;
    cout<<"The Value is: "<< a << endl;
    a = c-=2;
    cout<<"The Value is: "<< a << endl;
    a = c*=2;
    cout<<"The Value is: "<< a << endl;
    a = c/=2;
    cout<<"The Value is: "<< a << endl;
    a = c%2;
    cout<<"The Value is: "<< a << endl;
    a = c&2;
    cout<<"The Value is: "<< a << endl;
    a  =c|2;
    cout<<"The Value is: "<< a << endl;
    a = c^2;
    cout<<"The Value is: "<< a << endl;
    a = c>>=6;
    cout<<"The Value is: "<< a << endl;
    a = c<<=4;
    cout<<"The Value is: "<< a << endl;



}
