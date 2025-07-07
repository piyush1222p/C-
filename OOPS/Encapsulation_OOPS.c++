#include <iostream>
using namespace std;

/*Encapsulation: Encapsulation means wrapping data (variables) and methods (functions) together into a single unit 
                — a class — and restricting direct access to some of the object's components.*/
class Account{
    private:
        double balance;
        string password;
    public:
        string name;
        string account_Id;
    void setbalance(double bal){//Instead of double we use void as no need to return anything
        balance = bal;
    }
    double getbalance(){//Instead of Void we use double to return the balance
        return balance;
    }
};
int main(){
    Account A1;
    A1.name = "Piyush Shukla";
    A1.account_Id = "1234567890";
    A1.setbalance(15000.00);
    cout << "Account Holder Name: " << A1.name << endl;
    cout << "Account ID: " << A1.account_Id << endl;
    cout << "Account Balance: " << A1.getbalance() << endl;

}