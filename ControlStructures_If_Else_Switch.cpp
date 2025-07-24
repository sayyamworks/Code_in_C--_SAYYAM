#include<iostream>
#include<string>
using namespace std;
int main()
{
/*
Q1) What are Control Structures in C++? (Explained Simply)
ANS: Control structures are rules in a program that decide how the computer will run the code — whether it will choose        between options, repeat something, or jump to another part of the code.
Q2) Why do we need control structures?
Ans: Without them, the program would run line by line from top to bottom without any decisions.
With control structures, the program can:
Make decisions (like “If it’s raining, take an umbrella”).
Repeat actions (like “Count from 1 to 10”).
Jump to a certain part of the program when needed
Types
Types of Control Structures
1. Decision Making (Selection)
The program chooses what to do based on conditions.
Example:
"If you have money, buy ice cream; otherwise, go home."
In C++:
if
if-else
if-else if-else
switch
2. Loops (Iteration)
The program repeats some actions multiple times.
Example:
"Keep walking until you reach home."
In C++:
for
while
do-while
3. Jump Statements
The program jumps to another part instead of going in order.
Example:
"Skip this step and go directly to the end."
In C++:
break → exit a loop early
continue → skip one loop iteration
goto → jump to a labeled point (rarely used)
Real-Life Analogy
Imagine cooking:
Decision: "If salt is low, add more."
Loop: "Stir the soup every 2 minutes until it boils."
Jump: "If the stove is off, stop cooking immediately."
*/
//if , else , else if:
/*string data;
cout<<"Enter weather data to get a picnic plan"<<endl;
cin>>data;
if(data=="sunny")
{
    cout<<"You can go for picnic."<<endl;
}
else if(data=="rainy")
{
    cout<<"You cannot go for a picnic."<<endl;
}
else if(data=="cloudy")
{
    cout<<"You may go, but take precautionary measures."<<endl;
}
else
{
    cout<<"Enter the correct data. Thankyou!"<<endl;
}
*/
//switch:;
int day; //Enter from 1 to 7 days numbers, each number represents a day starting from 1 that represents Monday.
cout<<"Enter the day to know your daily plan."<<endl;
cin>>day;
switch(day)
{
    case(1):
        cout<<"Today is Monday and you have a meeting with CEO of Google."                     <<endl;
        break;
    case(2):
        cout<<"Today is Tuesday and you have to visit a hospital to your friend."              <<endl;
        break;
    case(3):
        cout<<"Today is Wdnesday and you have to visit a Mall with your wife."                 <<endl;
        break;
    case(4):
        cout<<"Today is Thursday and you have to go on a picnic with your Family."             <<endl;
        break;
    case(5):
        cout<<"Today is Friday and you have a halfday and make preperations for Jummah Prayer." <<endl;
        break;
    case(6):
        cout<<"Today is Saturday and you have a free day to take rest."                         <<endl;
        break;
    case(7):
        cout<<"Today is Sunday and you have to prepare yourself for next working day."         <<endl;
        break;
    default:
        cout<<"Incorrect Entry."<<endl;   
}
return 0;
}