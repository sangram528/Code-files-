//abstraction - hiding unneccessary data from outside a class
//getter - function that makes a private attribute READABLE
//setter - function that makes a private attribute WRITEABLE

#include<iostream>

class Stove{

    private:
        int temperature = 0;   ///temperature variable cannot be changed since modifier is private.
    public:
        int getTemperature(){     //getter - make an attribure readable
            return temperature;
        }
        void setTemperature(int temperature){
            this->temperature = temperature;
        }

};


int main(){

    Stove stove;
    stove.setTemperature(100000000);
    std::cout <<"the temperature setting is: "<<stove.getTemperature()<<'\n';
    
    return 0;
}