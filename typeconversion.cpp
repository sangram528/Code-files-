#include<iostream>

int main(){
    //type conversion - conversion of a value of one datatype to another 
    //Implicit - automatic 
    int x = 3.14;
    double y = 3.15;
    std::cout<<x<<'\n';
    std::cout<<y<<'\n';
    //Explicit - precede value with new datatype (int)
    double z = (int) 3.16;
    std::cout<<z<<'\n';

    //percentage calculation 

    int correct = 8;
    int questions = 10;
    double score1 = correct/questions *100; //This will show 0 as two ints are dividing and are forcing the result to be int 
    double score2 = correct/(double) questions * 100; //This will show the actual value 
    std::cout<<score1<<"%"<<'\n';
    std::cout<<score2<<'%'<<'\n';

    return 0;
}