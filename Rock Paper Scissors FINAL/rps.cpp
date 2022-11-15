#include <iostream>
#include <cstdlib>
#include <string>

int main(){

    std::string p1_choice;
    std::string p2_choice;
    std::string start;
    int p1_score(0);
    int p2_score(0);
    int round(1);

    std::cout<<" Ready to play Rock - Paper - Scissors?"<<std::endl;
        system("pause");
        std::cin.clear();
    do
    {
        system("cls");

    std::cout<<"       Round #"<<round<<"\n"<<std::endl;

    std::cout<<" Player #1, make a choice: \n R - Rock \n P - Paper \n S - Scissors"<<std::endl;
    std::getline(std::cin, p1_choice);
    std::cout<<std::endl;
    p1_choice={p1_choice,0,1};
        while(!(p1_choice == "R" || p1_choice == "r" || p1_choice == "P" || p1_choice == "p" || p1_choice == "S" || p1_choice == "s")){
            std::cout<<"Wrong input, make a choise from one of these: \n R - Rock \n P - Paper \n S - Scissors"<<std::endl;
            std::getline(std::cin, p1_choice);
            p1_choice={p1_choice,0,1};
        }
        system("cls");

    std::cout<<"       Round #"<<round<<"\n"<<std::endl;

    std::cout<<" Player #2, make a choice: \n R - Rock \n P - Paper \n S - Scissors"<<std::endl;
    std::getline(std::cin, p2_choice);
    p2_choice={p2_choice,0,1};
    std::cout<<std::endl;
        while(!(p2_choice == "R" || p2_choice == "r" || p2_choice == "P" || p2_choice == "p" || p2_choice == "S" || p2_choice == "s")){
            std::cout<<"Wrong input, make a choise from one of these: \n R - Rock \n P - Paper \n S - Scissors"<<std::endl;
            std::getline(std::cin, p2_choice);
            p1_choice={p1_choice,0,1};
        }
        system("cls");
    std::cout<<std::endl;

    // Draw:
    if((p1_choice == "R" || p1_choice == "r") && (p2_choice == "R" || p2_choice == "r")){
        std::cout<<" Draw! Both of you picked Rock!"<<std::endl;
    }
    if((p1_choice == "P" || p1_choice == "p") && (p2_choice == "P" || p2_choice == "p")){
        std::cout<<" Draw! Both of you picked Paper!"<<std::endl;
    }
    if((p1_choice == "S" || p1_choice == "s") && (p2_choice == "S" || p2_choice == "s")){
        std::cout<<" Draw! Both of you picked Scissors!"<<std::endl;
    }
    // 1 of 2:
    if((p1_choice == "P" || p1_choice == "p") && (p2_choice == "R" || p2_choice == "r")){
        std::cout<<" Paper covers Rock! Player #1 is a winner!"<<std::endl;
        ++p1_score;
    }
    if((p1_choice == "R" || p1_choice == "r") && (p2_choice == "P" || p2_choice == "p")){
        std::cout<<" Paper covers Rock! Player #2 is a winner!"<<std::endl;
        ++p2_score;
    }
    if((p1_choice == "R" || p1_choice == "r") && (p2_choice == "S" || p2_choice == "s")){
        std::cout<< "Rock breaks Scissors! Player #1 is a winner!"<<std::endl;
        ++p1_score;
    }
    if((p1_choice == "S" || p1_choice == "s") && (p2_choice == "R" || p2_choice == "r")){
        std::cout<<" Rock breaks Scissors! Player #2 is a winner!"<<std::endl;
        ++p2_score;
    }
    if((p1_choice == "S" || p1_choice == "s") && (p2_choice == "P" || p2_choice == "p")){
        std::cout<<" Scissors cut Paper! Player #1 is a winner!"<<std::endl;
        ++p1_score;
    }
    if((p1_choice == "P" || p1_choice == "p") && (p2_choice == "S" || p2_choice == "s")){
        std::cout<<" Scissors cut Paper! Player #2 is a winner!"<<std::endl;
        ++p2_score;
    }

    // Score
    std::cout<<"\n Score: Player #1 ["<<p1_score<<":"<<p2_score<<"] Player #2\n"<<std::endl;

    ++round;
    
        do{
        std::cout<<" Wanna play again? Y - Yes, N - No"<<std::endl;
        std::getline(std::cin, start);
        start={start,0,1};
        }while(!(start == "Y" || start == "y" || start == "N" || start == "n"));

    } while (start == "Y" || start =="y");
    
    // End
    std::cout<<"\n See you again soon!\n"<<std::endl;
        system("pause");
}