#include<iostream>
#include<ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
// void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout<<"Your choice: \n";
    showChoice(player);
    computer = getComputerChoice();
    std::cout<<"Computer choice: \n";
    showChoice(computer);
    return 0;
}

char getUserChoice(){
    char player;
    std::cout<<"Pick one of the following";
    do{
        std::cout<<"'r' for rock\n";
        std::cout<<"'p' for paper\n";
        std::cout<<"'s' for scissors\n";
        std::cin>>player;
    }while(player!='r' && player!='p'&& player!='s');
    return player;
}
char getComputerChoice(){
    int num;
    char computer;
    srand(time(NULL));
    num = rand()%3 + 1;
    switch(num){
        case 1:
        return 'r';
        case 2:
        return 'p';
        case 3:
        return 's';
        
    }
}
void showChoice(char choice){
    switch(choice){
        case 'r': 
        std::cout<<"Rock";
        case 'p':
        std::cout<<"Paper";
        case 's':
        std::cout<<"scissors";
    }
}
// void chooseWinner(char player, char computer){
//     return 0;
// }