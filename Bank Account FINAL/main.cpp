#include <iostream>
#include <iomanip>

void showbalance(double x);
double deposit(double x);
double withdraw(double x);

int main(){
    
    double balance(100.50);
    int choice;
    std::string name_reg;
    std::string password_reg;
    std::string pass_verified;
    
    std::cout<<" Wellcome to your bank account!\n\n"
            <<" To continue, you need to log in.\n"<<" Please, enter your name:"<<std::endl;
    std::cin>>name_reg;
    system("cls");
    std::cout<<" Welcome, "<<name_reg<<'\n'<<std::endl;
    std::cout<<" Enter your password:"<<std::endl;
    std::cin>>password_reg;
    system("cls");
    std::cout<<" Welcome, "<<name_reg<<'\n'<<std::endl;
    std::cout<<" Please, repeat your password:"<<std::endl;
    std::cin>>pass_verified;
    system("cls");

    if(password_reg != pass_verified){
        do{
            std::cout<<" Welcome, "<<name_reg<<'\n'<<std::endl;
            std::cout<<" Passwords are not the same, please try again.\n"<<std::endl;
            std::cout<<" Enter your password:"<<std::endl;
            std::cin>>password_reg;
            system("cls");
            std::cout<<" Welcome, "<<name_reg<<'\n'<<std::endl;
            std::cout<<" Repeat your password:"<<std::endl;
            std::cin>>pass_verified;
            system("cls");
        }
        while(password_reg != pass_verified);        
    }
    system("cls");

    std::cout<<" Welcome back, "<<name_reg<<". Please, choose an option: \n\n";

    do{
        std::cout<<" 1. Show balance\n"
                <<" 2. Deposit money\n"
                <<" 3. Withdraw money\n"
                <<" 4. Exit\n"<<std::endl;
        std::cin>>choice;
        std::cin.clear();
        fflush(stdin);
        system("cls");
            switch (choice)
            {
            case 1: showbalance(balance);
                break;
            case 2: balance += deposit(balance);
                    showbalance(balance);
                break;
            case 3: balance -= withdraw(balance);
                    showbalance(balance);
                break;
            default: std::cout<<" Invalid input\n"<<std::endl;
                break;
            } 
    }while(choice != 4);
}

void showbalance(double x){
    std::cout<< " Your balance is: $"<<std::setprecision(2)<<std::fixed<<x<<'\n'<<std::endl;
}
double deposit(double x){
    double amount = 0;
    showbalance(x);
    std::cout<<" Set the amount to deposit: ";
    std::cin>>amount;
        while(amount<0){
            system("cls");
            showbalance(x);
            std::cout<<" You cannot deposit negative amount.\n"
                    <<" Set the amount to deposit: ";
                    std::cin>>amount;
        }
        system("cls");
    return amount;
}
double withdraw(double x){
    double amount = 0;
    showbalance(x);
    std::cout<<" Set the amount to withdraw: ";
    std::cin>>amount;
        while((amount>x) || (amount <0)){
            system("cls");
            showbalance(x);
            std::cout<<" You cannot withdraw this amount of money.\n"
                    <<" Set the amount to withdraw: ";
                    std::cin>>amount;
        }
        system("cls");
    return amount;
}