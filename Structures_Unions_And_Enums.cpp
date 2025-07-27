#include<iostream>    // Header file for input/output functions like cout
#include<string>      // Header file for string data type
using namespace std;  // To avoid writing std:: before standard functions
/*
// Defining a structure named 'studentData' using typedef
typedef struct studentData
    {
        string std_name;  // Student name
        int roll_num;     // Student roll number
        char sec;         // Student section
        float marks;      // Student marks
    }stud;                // 'stud' is now an alias for 'struct studentData'
*/
// Defining a union named 'employe' using typedef
typedef union employe
{
    int emp_id;     // Employee ID
    int emp_CNIC;   // Employee CNIC (shares memory with emp_id)
}emp;

int main()
{
/*
    // --------- Student 1 Details ---------
    stud s1;                                            // Declare a variable s1 of type stud
    s1.std_name = "Sayyam";                             // Assign name
    s1.roll_num = 123;                                  // Assign roll number
    s1.sec      = 'A';                                  // Assign section
    s1. marks   = 98.65;                                // Assign marks
    // Display Student 1 details
    cout<<"The Data Of Student 1."        <<endl;       
    cout<<"Name          : "<<s1.std_name  <<endl;
    cout<<"Roll Number   : "<<s1.roll_num  <<endl;
    cout<<"Class Section : "<<s1.sec       <<endl;
    cout<<"Marks         : "<<s1. marks    <<endl;
    cout<<"\n";
    // --------- Student 2 Details ---------
    stud s2;
    s2.std_name = "Asad";
    s2.roll_num = 456;
    s2.sec      = 'B';
    s2. marks   = 89.12;
    cout<<"The Data Of Student 2."        <<endl;
    cout<<"Name          : "<<s2.std_name  <<endl;
    cout<<"Roll Number   : "<<s2.roll_num  <<endl;
    cout<<"Class Section : "<<s2.sec       <<endl;
    cout<<"Marks         : "<<s2. marks    <<endl;
    cout<<"\n";
    // --------- Student 3 Details ---------
    stud s3;
    s3.std_name = "Ashir";
    s3.roll_num = 789;
    s3.sec      = 'C';
    s3. marks   = 72.53;
    cout<<"The Data Of Student 3."        <<endl;
    cout<<"Name          : "<<s3.std_name  <<endl;
    cout<<"Roll Number   : "<<s3.roll_num  <<endl;
    cout<<"Class Section : "<<s3.sec       <<endl;
    cout<<"Marks         : "<<s3. marks    <<endl;
    cout<<"\n";
*/
    // --------- Union Example ---------
    emp e;
    e.emp_id = 123456789;                                   // Declare variable of union type emp
    // e.emp_CNIC = 1310182299523;                          // Assign employee ID
    // e.emp_CNIC = 1310182299523; This is commented because both fields share memory.
    cout<<"Your Employe Id   is : "<<e.emp_id   <<endl;    
    // cout<<"Your Employe CNIC is : "<<e.emp_CNIC <<endl; 
    // --------- Enum Example ---------
    enum animal{Lion,Wolf,Horse};   // Declare enumeration
    cout<<Lion<<endl;               // Prints 0 (default first value in enum)
    cout<<Wolf<<endl;               // Prints 1
    cout<<Horse<<endl;              // Prints 2

return 0;   // Successful program termination
}
