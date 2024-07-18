#include<iostream>
#include<iomanip>                     //for precise floating point representation
void showBalance(double balance);
double deposit();
double withdraw(double balance);
int main(){
    double balance = 0;
    int choice;
    do{
        std::cout<<"Enter your choice: \n";
        std::cout<<"1. Show Balance\n";
        std::cout<<"2. Deposit Money\n";
        std::cout<<"3. Withdraw Money\n";
        std::cout<<"4. Exit \n";
        std::cin>>choice;
        std::cin.clear();        //after our choice we need to clear the input buffer in case the input is some 
        fflush(stdin);          //some random input makes the program go crazy.
        switch(choice){
            case 1:
            showBalance(balance);
            break;
            case 2:
            balance += deposit();
            showBalance(balance);
            break;
            case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
            case 4:
            std::cout<<"Thanks for visiting";
            break;
        }

    }while(choice!=4);


}

void showBalance(double balance){
    std::cout<<"Your balance is: Rs."<<std::setprecision(2)<<std::fixed<<balance<<'\n';

}
double deposit(){
    double amount;
    std::cout<<"Enter amount to depost: \n";
    std::cin>>amount;
    return amount;

}

double withdraw(double balance){
     double amount;
    std::cout<<"Enter amount to withdraw: \n";
    std::cin>>amount;
    return amount;
}