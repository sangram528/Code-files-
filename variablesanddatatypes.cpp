#include <iostream>

int main(){
    //integer datatype 
    int x;
    x = 5;
    int y = 6;
    int sum = x+y;
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << std::endl;

    // double datatype
    double price = 15.2356;
    
    std::cout << price << '\n';

    //single character 
    char grade = 'A';
    // char initial = 'BC';      //char can store only one character. More than one will result in overflow 
    std::cout << grade << '\n';
    // std::cout << initial << std::endl;

    //boolean
    bool student = true;
    bool power = false;   
    std::cout << student << '\n';
    
    //string
    std::string name = "Bro";
    std::string day = "Friday";
    std::cout << name << '\n';
    std::cout << "Today is " << day << '\n';


    //const keyword 
    //the const keyword specifies that a vaiable's value is constant and 
    //tells the compiler to prevent anything from modifying it 
    //area and circumference of a circle 

    const double PI = 3.14159;     //the value of PI remains constant throughout the code 
    double radius = 10;
    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;
    
    std::cout << "circumference: " << circumference << '\n';
    std::cout << "area: " << area << '\n';
    return 0;
} 