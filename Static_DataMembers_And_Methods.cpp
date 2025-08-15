#include<iostream>
#include<string>
using namespace std;

class Library{
    static int sNo;
    string name_of_book[5];
    public:
    void enterData()
    {
        cout<<"Enter the names of 5 books you want to read"<<endl;
        for(int i=0; i<5;i++){
        cin>>name_of_book[i];
        }
    }
    void displayData()
    {
        cout<<"Books you want to read are as follows"<<endl;
        for(int i =0; i<5; i++){
            cout<<sNo<<" : "<<name_of_book[i]<<endl;
            sNo++;
        }
    }
    static void serNo()
    {
        cout<<"Book "<<sNo<<endl;
    }
};
int Library :: sNo = 0; 

int main()
{
    Library lb;
    lb.enterData();
    lb.displayData();
    Library::serNo();
    return 0;
}