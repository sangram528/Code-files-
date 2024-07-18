#include<iostream>
#include<ctime>
int main(){
    int num;
    int guess;
    int tries=1;
    srand(time(NULL));
    num = (rand()%100)+1;
    
    do{
        std::cout<<"Guess a number between 1 and 100: \n";
        std::cin>>guess;
        tries++;
        if(guess > num){
            std::cout<<"Too high\n";
        }
        else if(guess<num){
            std::cout<<"Too low\n";
        }
        else{
            std::cout<<"You guessed correctly!\n"<<"Number of tries: \n"<<tries;
        }

    }while(guess!=num);
    return 0;
}