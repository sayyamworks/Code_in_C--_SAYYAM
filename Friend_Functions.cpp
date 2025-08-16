#include<iostream>
using namespace std;

/*
Question:
Create a class Rectangle that has two private data members: length and width.
Write a friend function that calculates and displays the area of the rectangle.
*/
class Rectangle{
    int length;
    int width;
    public: 
    void setData()
    {
        cout<<"Enter the legth of a Rectangle: ";
        cin>>length;
        cout<<"Enter the width of a Rectangle: ";
        cin>>width;
    }
    friend float area(Rectangle r);
};
    float area(Rectangle r){
        return r.length * r.width;
    }
int main()
{
    Rectangle rec;
    rec.setData();

    cout<<"Area of Rectangle is: "<<area(rec)<<endl;
    return 0;
}