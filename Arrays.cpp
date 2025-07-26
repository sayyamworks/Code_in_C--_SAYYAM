#include<iostream>
using namespace std;

int main()
{
    // Declare and initialize an integer array with 5 elements
    int num[5]={11,12,13,14,15};
    // Accessing array elements using indexes (normal way)
    cout<<"The Value At Address 0 is: "<<num[0]<<endl; // First element  (11)
    cout<<"The Value At Address 1 is: "<<num[1]<<endl; // Second element (12)
    cout<<"The Value At Address 2 is: "<<num[2]<<endl; // Third element  (13)
    cout<<"The Value At Address 3 is: "<<num[3]<<endl; // Fourth element (14)
    cout<<"The Value At Address 4 is: "<<num[4]<<endl; // Fifth element  (15)
    cout<<"\n";
    /*
   string names[6]={"Muhammad","Abubakar","Umar","Usman","Ali","Sayyam"};
   for(int i=0; i<6;i++)
   {
    cout<<"My Favourite Name is: "<<names[i]<<endl;
   }
   */
  // Pointer to the first element of the array
    int *p = num; // 'num' automatically gives address of first element (&num[0])
    cout<<"The Value of  p:     "<<   p    <<endl; // This will print the memory address of     (num[0])
    cout<<"The Value of *p    : "<<  *p    <<endl; // Dereferencing pointer: gives value 11     (num[0])
    cout<<"The Value of  (p+1): "<<  (p+1) <<endl; // Printing address of next element (p+1)    (num[1])
    cout<<"The Value of *(p+1): "<< *(p+1) <<endl; // Dereferences (p+1) to give value 12       (num[1])
    cout<<"The Value of  (p+2): "<<  (p+2) <<endl; // Printing value at address of next element (num[2])
    cout<<"The Value of *(p+2): "<< *(p+2) <<endl; // Dereferences (p+2) to give value 13       (num[2])
    cout<<"The Value of  (p+3): "<<  (p+3) <<endl; // Address of fourth element                 (num[3])
    cout<<"The Value of *(p+3): "<< *(p+3) <<endl; // Dereferences (p+3) to give value 14       (num[3])
    cout<<"The Value of  (p+4): "<<  (p+4) <<endl; // Address of fifth element                  (num[4])
    cout<<"The Value of *(p+4): "<< *(p+4) <<endl; // Dereferences (p+4) to give value 15       (num[4])
    
    return 0;
}