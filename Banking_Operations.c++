//banking Operation
#include <iostream>
#include <iomanip>

double show_balance(const double &balance);  /*Here the void function is used to make a fun that  will show the balance of the account with string operations too*/
double deposit(double &balance);   /*Here the double function is used to make a fun that will deposit the money in the account no string operation is there*/
double withdraw(double &balance);

int main()
{
    std::cout<<"********Welcome to Banking System********"<<std::endl;

    //variable Asigning
    double balance = 1500.00;
    int choice;

    do
    {
        //Menu Display
        std::cout<<"Enter your Choice: "<<std::endl;
        std::cout<<"1. Show Balance"<<std::endl;
        std::cout<<"2. Withdraw"<<std::endl;
        std::cout<<"3. Deposit"<<std::endl;
        std::cout<<"4. Exit"<<std::endl;

        std::cin>>choice;

        switch (choice)
        {
            case 1:
                show_balance(balance);
                break;
            case  2:
                withdraw(balance);
                break;
            case 3:
                deposit(balance);
                break;
            case 4:
                std::cout<<"Thanks for Visiting"<<std::endl;
                break;
            default:
                std::cout<<"Please Enter a valid choice"<<std::endl;
                break;
        }
    } 
    while (choice != 4);
    return 0;
}

//Function declaration
double show_balance(const double &balance)
{
    std::cout<<"Your Balance is "<<balance<<std::endl;
    return 0;
}
double deposit(double &balance)
{
    double deposit_1;
    
    std::cout<<"Enter the amount you want to deposit: "<<std::endl;
    std::cin>>deposit_1;
    
    if (deposit_1>0)
    {
        balance+=deposit_1;
        std::cout<<"Your Updated Balance is : "<<balance<<std::endl;
    }
    else
    {
        std::cout<<"Invalid Deposit Amount"<<std::endl;
    }
    return 0;
}
double withdraw(double &balance)
{
    double withdrawl_amount;
    
    std::cout<<"Enter your Withdrawl amount: "<<std::endl;
    std::cin>>withdrawl_amount;

    if (withdrawl_amount>0 && withdrawl_amount <=balance)
    {
        balance-=withdrawl_amount;
        std::cout<<"Your Updated Balance is : "<<balance<<std::endl;
    }
    else
    {
        std::cout<<"Invalid withdrawl amount, Please check your balance and try again"<<std::endl;
    }
    return 0;
}