#include<iostream>
using namespace std;
// int mul(int a, int b); //Function Prototype.
// void swap(int *a ,int *b);
// void swap_by_refrenceVariable(int& a ,int& b);
// int& swap_by_refrenceVariable(int& a ,int& b);
/* 
inline int mul(int a, int b);
inline int mul(int a, int b)
{
    return a * b;
} 

float sum(int a, float b = 23.4); //Defaulr arguments.

// int sum(int a, const int b);

int fact(int n);

int fib(int n);
*/
int area(int a);
int area(int a, int b);
int main()
{
    /*
    int num1 , num2;
    cout<<"Enter the vlaue of num 1: "<<endl;
    cin>>num1;
    cout<<"Enter the vlaue of num 2: "<<endl;
    cin>>num2;
    int result = mul(num1, num2); //num1 and num2 are Arguments.
    cout<<"Your result is: "<<result<<endl;
    
    //Call by Refrence.
    int U = 2;
    int V = 3;
    cout<<"\nBefore Swaping."<<endl;
    cout<<"The Value of U is: "<<U<<endl<<"The Value of V is: "<<V<<endl;
    swap(&U , &V); //This will Swap U and V using POinters Refrence.
    cout<<"\nAfter Swaping."<<endl;
    cout<<"The Value of U is: "<<U<<endl<<"The Value of V is: "<<V<<endl;
    
    int E = 7;
    int F = 8;
    cout<<"\nBefore Swaping."<<endl;
    cout<<"The Value of E is: "<<E<<endl<<"The Value of F is: "<<F<<endl;
    // swap_by_refrenceVariable(E , F); //This will Swap E and F using POinters Refrence.
    swap_by_refrenceVariable(E , F)=555;
    cout<<"\nAfter Swaping."<<endl;
    cout<<"The Value of E is: "<<E<<endl<<"The Value of F is: "<<F<<endl;
    
    //Inline Functions
    int c ,d;
    cout<<"Enter the Value of C: "<<endl;
    cin>>c;
    cout<<"Enter the Value of D: "<<endl;
    cin>>d;
    cout<<"The Result of Inline Function of multiplication is: "<<mul(c, d)<<endl;
    
   int x;
   int y;
    cout<<"Enter the values of x and y to perform sum: "<<endl;
    cin>>x;
    // cout<<sum(x)<<endl; For Default Argument.
    cin>>y;
    // cout<<sum(x , y)<<endl; For Default Argument.
    cout<<sum(x, y)<<endl;
    
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    cout<<fact(num)<<endl;

    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;
    cout<<fib(num)<<endl;
    for(int i=0; i<num; i++)
    {
        cout<<"Fibinochhi Series: "<<i<<" is "<<fib(i)<<endl;
    }
*/
    //Function Overloading.
    int S,L,W;
    cout<<"TO Find the Area of Square.\n";
    cout<<"Enter the value of Side of square: \n";
    cin>>S;
    cout<<area(S)<<endl;
    cout<<"TO Find the Area of Rectangle.\n";
    cout<<"Enter the value of Lenght of Rectangle: \n";
    cin>>L;
    cout<<"Enter the value of Width of Rectangle: \n";
    cin>>W;
    cout<<area(L,W)<<endl;
    return 0;
}
/*
int mul(int a, int b) //Funtion Defination. int a and int b are Perameters.
{
    int c = a * b;
    return c;
}

//Call by refrence using pointers.
void swap(int *a ,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Call by Refrence using C++ refrence Variables.
void swap_by_refrenceVariable(int& a ,int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

//Call by Return By Refrence.
int& swap_by_refrenceVariable(int& a ,int& b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

float sum(int a, const float b)
{
    return a + b; 
}
    
int sum(int a, const int b = 10)
{
    // b = 12; // It cannot be modified due to contant Argument That b = 10;
    return a + b; 
}

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
*/
//Function Overloading.
int area(int a)
{
    return a*a;
}
int area(int a, int b)
{
    return a*b;
}