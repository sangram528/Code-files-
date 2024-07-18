#include<iostream>

int main(){

    char op;
    double num1;
    double num2;

    std::cout << "Enter #1: " << '\n';
    std::cin >> num1;
    std::cout << "Enter #2: " << '\n';
    std::cin >> num2;   
    std::cout << "Enter the operation (+ - * /): " << '\n';
    std::cin >> op;

    switch(op){
        case '+':
           std::cout << "Result: " << num1 + num2 << '\n';
           break;
        case '-':
           std::cout << "Result: " << num1 - num2 << '\n';
           break;
        case '*':
            std::cout << "Result: " << num1 * num2 << '\n';
            break;
        case '/':
            if (num2 != 0)
                std::cout << "Result: " << num1 / num2 << '\n';
            else
                std::cout << "Error: Division by zero is not allowed." << '\n';
            break;
        default:
            std::cout << "Enter a correct operator" << '\n';
            break;
    }
    return 0;
}
