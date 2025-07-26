#include<iostream>
using namespace std;

int main()
{
    /*
    int a  = 10;
    int *b = &a;
    cout<<"The Value At a  is: "<< a  << endl;   // Value of 'a'
    cout<<"The Value At b  is: "<< b  << endl;   // Address stored in pointer 'b' (address of 'a')
    cout<<"The Value At &a is: "<< &a << endl;   // Address of the pointer variable 'a' itself
    cout<<"The Value At &b is: "<< &b << endl;   // Address of the pointer variable 'b' itself
    cout<<"The Value At *b is: "<< *b << endl;   // Value at address stored in 'b' (value of 'a')
    */
   //pointer to pointer
   int c   = 2;
   int *d  = &c;
   int **e = &d;
   cout<<"The Value At c  is: "<< c   << endl;   // Value of 'c'
   cout<<"The Value At d  is: "<< d   << endl;   // Address stored in pointer 'd' (address of 'c')
   cout<<"The Value At &c is: "<< &c  << endl;   // Address of the pointer variable 'c' itself
   cout<<"The Value At &d is: "<< &d  << endl;   // Address of the pointer variable 'd' itself
   cout<<"The Value At *d is: "<< *d  << endl;   // Value at address stored in 'd' (value of 'c')
   cout<<"The Value At e is:  "<< e   << endl;   // Address of the pointer variable 'd' 
   cout<<"The Value At e is:  "<< &e  << endl;   // Address of the pointer variable 'e' itself
   cout<<"The Value At e is:  "<< *e  << endl;   // Value at address stored in 'e' (which is address of 'c')
   cout<<"The Value At e is:  "<< **e << endl;   // Value of 'c'

   return 0;
}