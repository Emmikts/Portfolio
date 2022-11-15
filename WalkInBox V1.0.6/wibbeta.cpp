#include <iostream>
#include <conio.h>
#include <cmath>
#include <ctime>

int main(){
    
    int SetSize_X = 11;
    int SetSize_Y = 10;
    int Size_X = 0;
    int Size_Y = 0;
    
    int Score = (-1); 
    std::string Input;

    // Walk(1) or Run(2)
    int Q_E = 2;

    // Time for srand()
    time_t currenttime;
    time (&currenttime);

    // Player Coordinates:
    double Player_X = 11;
    double Player_Y = 5;

    // Apple Coordinates:
    int Apple_X = 0;
    double Apple_Y = 0;

    // Game logic
    while(true){

        // Set playground Size
        Size_X = SetSize_X*2;
        Size_Y = SetSize_Y+1;
        
        // Apple logic
        srand(time(NULL));
        while((Apple_X==Player_X && Apple_Y==Player_Y) || Apple_X==0){
            Apple_X = (rand() % (Size_X-1)) +1;
            Apple_Y = (rand() % (Size_Y-1)) +1;

            ++Score;
        }

        // Upper border
        for(int j{0}; j<(Size_X+1); ++j){
                if(j%2 == 0){
                    std::cout<<"@";
                }else{
                    std::cout<<" ";
                }
            }
            std::cout<<std::endl;

        // Player and Apple Location on the ground
        for(int i{1}; i<Size_Y; ++i){
            std::cout<<"@";
            
            for(int j{1}; j<Size_X; ++j){
                if(j==Player_X && i==Player_Y){
                    std::cout<<"X";
                }else if(j==Apple_X && i==Apple_Y){
                    std::cout<<"O";
                }else{
                    std::cout<<" ";
                }
            }

            std::cout<<"@"<<std::endl;
        }
        
        // Lower border
        for(int j{0}; j<(Size_X+1); ++j){
            if(j%2 == 0){
                std::cout<<"@";
            }else{
                std::cout<<" ";
            }
        }
        
        // Statistic
        std::cout<<"\nScore: "<<Score;
        (Q_E==1) ? std::cout<<"        Walking"<<std::endl : std::cout<<"        Running"<<std::endl;
        
        // Tips
        std::cout<<"\n W, A, S, D - Movements\n"
                    <<" Q - Walk, E - Run\n"
                    <<" T - Teleport to the centre\n"
                    <<" R - Reset the Score\n\n"
                    <<" Playground Size: "<<SetSize_X<<" x "<<SetSize_Y<<"\n"
                    <<" / - Change size";

        // Input check
        Input = getch();
        if(Input=="w" || Input=="W"){
            Player_Y -=1;
        }
        if(Input=="s" || Input=="S"){
            Player_Y +=1;
        }
        if(Input=="a" || Input=="A"){
            Player_X -=Q_E;
        }
        if(Input=="d" || Input=="D"){
            Player_X +=Q_E;
        }
        if(Input=="q" || Input=="Q"){
            Q_E = 1;
        }
        if(Input=="e" || Input=="E"){
            Q_E = 2;
        }
        if(Input=="r" || Input=="R"){
            Score = 0;
        }

        // Setting Size of the playground
        if(Input=="/"){
            do{
                system("cls");
                std::cout<<" Set Length (X) and Height (Y) of the playground\n WARNING: Size cannot be less than 2!\n\n Enter Length: ";
                std::cin>>SetSize_X;
                std::cout<<"\n Enter Height: ";
                std::cin>>SetSize_Y;
            }while(SetSize_X<2 || SetSize_Y<2);

            // Moving apple position in bounds
            Apple_X =0;
            Apple_Y =0;

            // Reset Score
            Score = -1;
        }

        // Teleport to centre
        if(Input=="t" || Input=="T"){
            Player_X = Size_X/2;
            Player_Y = Size_Y/2;
        }

        // Checking if Player is in bounds
        if(Player_Y>(Size_Y-1)){
            Player_Y -=1;
        }else if(Player_Y<1){
            Player_Y +=1;
        }else if(Player_X>(Size_X-1)){
            Player_X =(Size_X-1);
        }else if(Player_X<1){
            Player_X =1;     
        }
            system("cls");
    }
}