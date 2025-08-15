#include<iostream>
using namespace std;
/*
class student{
    int regNo;
    string name;
    public:
    void setData()
    {
        cout<<"Enter the Regestration Number of a student: "<<endl;
        cin>>regNo;
        cout<<"Enter the Name of a student: "<<endl;
        cin>>name;
    }
    void getData()
    {
        cout<<regNo<<" is the Regestration id of "<<name<<endl;
    }
};
*/
/*
Question:2
Create a class Rectangle with:
Two private data members: length and width (both integers)
A member function input() to take values from the user.
A member function area() to calculate and return the area of the rectangle.
Write a separate function (not part of the class) called compareArea that:
Takes two Rectangle objects as arguments (pass them by value)
Compares their areas and displays which rectangle has the larger area, or if they are equal.
Demonstrate the working in main() by creating two objects and passing them to the function.
*/
class Rectangle{
    int width;
    int length;
    public:
    void input()
    {
        cout<<"Enter the value of width: "<<endl;
        cin>>width;
        cout<<"Enter the value of length: "<<endl;
        cin>>length;
    }
    int area()
    {
        return length*width;
    }
};
void compareArea(Rectangle r1, Rectangle r2)
{
    int rect_1 = r1.area();
    int rect_2 = r2.area();
    if(rect_1 > rect_2)
    {
        cout<<"Rectangle 1 has greater Area."<<endl;
    }
    else if(rect_1 < rect_2)
    {
        cout<<"Rectangle 2 has greater Area."<<endl;
    }
    else if(rect_1 == rect_2)
    {
        cout<<"Both Rectangles have same Area."<<endl;
    }
    else
    {
        cout<<"Incorrect Entry."<<endl;
    }
}
int main()
{
/*
    student s[3];
    for(int i=0; i<3; i++)
    {
        s[i].setData();
        s[i].getData();
    }
*/
    Rectangle R1 , R2;
    cout<<"Calculate the Area of Rectangle 1"<<endl;
    R1.input();
    R1.area();
    cout<<"Calculate the Area of Rectangle 2"<<endl;
    R2.input();
    compareArea(R1, R2);
    return 0;
}
