#include <iostream>
#include <string>

using namespace std;

void info(string a, string b){
    string login = a;
    string password = b;

    cout<<"Now you have an account!\n"
        <<"Your login: "<<login<<'\n'
        <<"Your password: "<<password<<endl;
}

int main(){

    string login_reg;
    string password_reg;
    string pass_verified;
    
    cout<<"To continue, you need an account, you can sign up now!\n"<<"Enter your login:"<<endl;
    cin>>login_reg;
    cout<<"Enter your password:"<<endl;
    cin>>password_reg;
    cout<<"Repeat your password:"<<endl;
    cin>>pass_verified;

    if(password_reg != pass_verified){

        do{
            cout<<endl;
            cout<<"Passwords are not the same, please try again."<<endl;

            cout<<"Enter your password:"<<endl;
            cin>>password_reg;
            cout<<"Repeat your password:"<<endl;
            cin>>pass_verified;
        }
        while(password_reg != pass_verified);

        cout<<endl;
        info(login_reg, password_reg);
    }
    
    system("pause");
    

}