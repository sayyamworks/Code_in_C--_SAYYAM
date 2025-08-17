#include<iostream>
using namespace std;
//Q1) Create a class Student (private: marks). Create a friend class Teacher that calculates grade.
class Student{
    float marks;
    public:
    void setData()
    {
        cout<<"Enter Marks: ";
        cin>>marks;
    }
    friend class Teacher;
};
class Teacher{
    public:
    float CalGrades(Student s)
    {
    if(s.marks<1)
    {
        return 1;
    }
    else if(s.marks>=90 && s.marks<=100)
    {
        cout<<"Congragulations You have A+ grade."<<endl;
    }
    else if(s.marks>=80 && s.marks<90)
    {
        cout<<"Good You have A grade."<<endl;
    }
    else if(s.marks>=70 && s.marks<80)
    {
        cout<<"Not Bad You have B grade."<<endl;
    }
    else if(s.marks>=60 && s.marks<70)
    {
        cout<<"Satisfactory You have C grade."<<endl;
    }
    else if(s.marks>=50 && s.marks<60)
    {
        cout<<"You have D grade."<<endl;
    }
    else
    {
        cout<<"Fail.";
    }
}
};
int main()
{
    Student std;
    std.setData();

    Teacher T;
    T.CalGrades(std);

    return 0;
}