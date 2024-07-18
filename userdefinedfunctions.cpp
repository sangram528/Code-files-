#include<iostream>

//function to say happy birthday 

void happyBirthday(std::string name);               //for easiness people write their function after the main function. Problem is when we declare the function
                                    //in main function, it gived an error. Therefore, we declare the function at first, call it in the main function and can
                                    //define it after the main function without any error.


int main(){
    //function - a block of reusable code
    std::string name = "Bro"; 
    happyBirthday(name);
    return 0;   

}

void happyBirthday(std::string name){
    std::cout<<"Happy Birthday to you! \n";
    std::cout<<"Happy Birthday to you! \n";
    std::cout<<"Happy Birthday dear "<<name<< "\n";
    std::cout<<"Happy Birthday to you! \n";
}