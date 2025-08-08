#include<iostream>
#include<string>
using namespace std;
/*
Question:
Create a class BankAccount with the following:
Private data members:
accountNumber (int)
balance (float)
Private function:
updateBalance(float amount) → updates the account balance.
Public functions:
deposit() → asks the user for an amount and calls updateBalance() internally to add money.
withdraw() → asks the user for an amount and calls updateBalance() internally to subtract money.
display() → shows the account number and balance.
Requirement:
Demonstrate nesting of member functions by calling the private updateBalance() only from inside the public deposit() and withdraw() functions, not from main().
*/
class BankAccount{
    private:
        int accountnumber;
        float balance;
        void updatebalance(float amount){
            balance += amount;
            cout<<"Your updated Balance is: "<<balance<<endl;
        }
    public:
        BankAccount(int AccNum, float Bal)
        {
            accountnumber = AccNum;
            balance = Bal;
        }
        void deposit()
        {
            float amount;
            cout<<"Enter the amount: "<<endl;
            cin>>amount;
            updatebalance(amount);
        }
        void withdraw()
        {   float amount;
            cout<<"Enter the amount you want to withdraw: "<<endl;
            cin>>amount;
            updatebalance(-amount);
        }
        void display()
        {
            cout<<"Your Account number     is: "<<accountnumber <<endl;
            cout<<"Your Balance in Account is: "<<balance       <<endl;
        }
};
int main()
{
    BankAccount BA(12345, 5000);
    BA.deposit();
    BA.withdraw();
    BA.display();
    return 0;
}