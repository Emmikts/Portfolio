#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main(){
    
    time_t currenttime;
    time (&currenttime);

    string wish;

    string answer;

    cout<<" Rules are easy, You will spin the roulette and get the number from 1 to 6\n"<<endl;
    system ("pause");

    while(true){

        srand(time(NULL));
        int num = (rand() % 6) + 1;

        switch (num)
        {
        case 1:
            cout<<"You got 1. You lost\n"<<endl;
            break;
        case 2:
            cout<<" You got 2. Well, nothingmuch, but I can tell your time:\n"<<ctime(&currenttime)<<endl;            
            break;
        case 3:
            cout<<" You got 3. It's your time to shine! Make a wish, tell me what you want?"<<endl;
            getline(cin, wish);
            cout<<"\n What... is that all? Just a *"<<wish<<"*?\n You could ask for everything but this!\n Well... let it be, I hope your wish come true\n"<<endl;
            break;
        case 4:
            cout<<" You got 4. Your mom loves you\n"<<endl;
            break;
        case 5:
            cout<<" You got 5.\n"
                <<"     ___________\n"
                <<"    |___________|\n"
                <<"    |    |_|    |\n"
                <<"    |           |\n"
                <<"    |___________|\n"
                <<endl;
                system("pause");
            cout<<"     ___________\n"
                <<"    |   _____   |\n"
                <<"    |  | . . |  |\n"
                <<"    |__|__Y__|__|\n"
                <<"    |           |\n"
                <<"    |           |\n"
                <<"    |___________|\n"
                <<endl;
            break;
        case 6:
            cout<<" 3 + 3 = ?"<<endl;
            getline(cin, answer);
            if(answer == "6" || answer == "six"){
                cout<<" well done, take a shit \n"<<endl;
            }else{
                cout<<" O_O \n"<<endl;
            }
            break;
        
        }
        cout<<" Wanna play again?\n"<<endl;
        system("pause");

    }
    
}
