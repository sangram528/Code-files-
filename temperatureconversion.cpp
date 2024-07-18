#include<iostream>
int main(){
   double temp;
   char unit;
   std::cout<<"Celsius - C \n";
   std::cout<<"Farenheit - F \n";
   std::cout<<"Enter which unit would you like to convert to: \n";
   std::cin>>unit;
   if(unit == 'F' || unit == 'f'){
    std::cout<<"Enter the temperature in celsius: \n";
    std::cin>>temp;
    double farenheit = ((9*temp)/5)+32;
    std::cout<<"The temperature in farenheit is: "<<farenheit;
   }
   else{
    std::cout<<"Enter the temperature in farenheit: \n";
    std::cin>>temp;
    double celsius = (5*(temp-32))/9;
    std::cout<<"The temperature in celsius is: "<<celsius;
   }
   return 0;
}