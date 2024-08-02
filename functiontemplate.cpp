#include<iostream>
template <typename T>

T max(T x, T y){

    return(x>y)?x:y;

}



int main(){

    //function template - describes what a function looks like. 
    //can be used to generate as many overloaded functions as needed, each 
    //using different datatypes.
    std::cout << max(212121.125494,465959595.589290)<<'\n';

    return 0;



}