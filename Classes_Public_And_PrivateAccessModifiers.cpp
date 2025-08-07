#include<iostream>
using namespace std;

class zoo{
    private:
        string name_A1, name_A2, name_A3;
        int age_A1, age_A2, age_A3;
    public:
        int num = 3;
        void setAnimal(string n1, int a1, string n2, int a2, string n3, int a3 ){
            name_A1 = n1; name_A2 = n2; name_A3 = n3;
            age_A1  = a1; age_A2  = a2; age_A3  = a3;
        }
        void getAnimal()
        {
            cout<<"Animal 1: "<<name_A1<<"  Age: "<<age_A1<<endl;
            cout<<"Animal 2: "<<name_A2<<" Age: "<<age_A2<<endl;
            cout<<"Animal 3: "<<name_A3<<"  Age: "<<age_A3<<endl;
        }
};
int main() {
    zoo Z;
    cout<<Z.num<<endl;
    Z.setAnimal("Lion",9,"Horse",8,"Wolf",7);
    Z.getAnimal();
    return 0;
}
