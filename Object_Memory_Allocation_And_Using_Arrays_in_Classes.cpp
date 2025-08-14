#include<iostream>
using namespace std;
/* Topper in a Class
Create a Result class with:
names[5] (array of strings)
marks[5] (array of integers)
A function to input all names and marks.
A function to find and display the name of the student with the highest marks.
*/
class topper{
    string name[5];
    int marks[5];
    public:
    void inputData()
    {   
        cout<<"Enter the name and marks of students"<<endl;
        for(int i=0; i<5; i++)
        {
            cout<<"Enter the name of student "<<endl;
            cin>>name[i];
            cout<<"Enter the marks of student "<<endl;
            cin>>marks[i];
        }
    }
    void display()
    {
        int highestMarks = marks[0];
        string Name = name[0];
        for(int i=0; i<5; i++)
        {
            if(marks[i]>highestMarks)
            {
                highestMarks = marks[i];
                Name = name[i];
            }
        }
        cout<<"Student "<<Name<<" has highest marks that are "<<highestMarks;
    }
};
int main()
{
    topper t;
    t.inputData();
    t.display();
    return 0;
}