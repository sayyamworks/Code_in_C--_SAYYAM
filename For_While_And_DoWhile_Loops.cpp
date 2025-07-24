#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    /*
    int num;
    cout<<"Enter the value: "<<endl;
    cin>>num;
    
    //For Loop.
    for(int i=0; i<=num; i++)
    {
        if(i==16)
        {
            break;
        }
        cout<<i<<endl;
    }
    
    //While Loop.
    int i=3;
    while(i<=num)
    {
        cout<<i<<endl;
        i++;
    }
    
   //Do While.
   int i=1;
   do
   {
    cout<<i<<endl;
    i++;
   }while(i<=num);
   */
  //Task: Write the table using do_while loop.
  int t;
  cout<<"Enter the number which table you want to print: ";
  cin>>t;
  cout<<"Here is the table of: "<<t<<endl;
  int i =1;
  do{
    int tab=i*t;
    cout<<setw(2)<<i<<" x "<<t<<" = "<<tab<<endl;
    i++;
  }while(i<=10);

    return 0;
}