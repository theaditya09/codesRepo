#include <iostream>
using namespace std; 

class BankAccount{
    private:
        int accountNumber;
        double balance;
        double interestRate;
        static int totalAccounts;

    public:
        BankAccount(int an, double bal, double ir = 0.05)
        {
            totalAccounts++;
            accountNumber = an;
            balance = bal;
            interestRate = ir;
        }

        void deposit(double amount)
        {
            balance = balance + amount;
        }

        void withdraw(double amount)
        {
            balance = balance - amount;
        }

        void addInterest()
        {
            balance = balance + balance*interestRate;
        }

        void getBalance()
        {
            cout<<balance<<endl;
        }

        void getAccountNumber()
        {
            cout<<accountNumber<<endl;
        }

        void display()
        {
            cout<<"Account No : "<<accountNumber<<endl;
            cout<<"Balance : "<<balance<<endl;
        }

        static int getBankAccountCount()
        {
            return totalAccounts;
        }

        friend void transfer(BankAccount&, BankAccount&, double);
};

void transfer(BankAccount& from, BankAccount& to, double amount)
{
    if(from.balance >= amount)
    {
        from.withdraw(amount);
        to.deposit(amount);
    }
}

int BankAccount::totalAccounts = 0;

int main() {

    BankAccount a1(1,1000,0.01),a2(2,2000,0.02),a3(3,3000,0.03),a4(4,4000,0.04);

    cout<<"Total Bank Accounts are : "<<BankAccount::getBankAccountCount()<<endl;

    cout<<endl;
    cout<<endl;

    a1.display();
    a2.display();
    a3.display();
    a4.display();

    cout<<endl;
    cout<<endl;

    cout<<"After adding interest "<<endl;
    a1.addInterest();
    a2.addInterest();
    a3.addInterest();
    a4.addInterest();

    a1.display();
    a2.display();
    a3.display();
    a4.display();

    cout<<endl;
    cout<<endl;

    cout<<"After Transfer : "<<endl;
    transfer(a4,a1,2000);
    transfer(a2,a3,500);

    a1.display();
    a2.display();
    a3.display();
    a4.display();


    return 0;
}