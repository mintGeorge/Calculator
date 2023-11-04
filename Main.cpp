#include <iostream>

int main(){

    double x;
    double y;
    char op;

    std::cout << "Calculator\n";
    std::cout << "Enter first digit : ";
    std::cin >> x;
    std::cout << "Enter second digit : ";
    std::cin >> y;
    std::cout << "Enter the operation (+,-,*,/) : ";
    std::cin >> op;
    

    switch(op){

        case '+':
        std::cout << x+y;
        break;

        case '-':
        std::cout << x-y;
        break;

        case '*':
        std::cout << x*y;
        break;

        case '/':
        std::cout << x/y;
        break;

        default: 
        std::cout << "Not a valid response.";

    }

    

    return 0;
}