#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    /*
    //Constants.
    int const num = 12;
    cout<<num;
    //num = 2; It will give an error because num is constant.
    
    //Manipulators.
    int a = 1;
    int b = 12;
    int c = 123;
    int d = 1234;
    int e = 12345;
    cout<< setw(5)            << a <<endl;
    cout<< setw(5)            << b <<endl;
    cout<< setw(5)            << c <<endl;
    cout<< setw(5)            << d <<endl;
    cout<< setw(5) << showpos << e <<endl;
    */
   //Operator precedence:
    int   a = 10;
    int   b = 4;
    float c = (((a*b)+5)-3);
    cout<< c <<endl;

    return 0;
}
