#include <iostream>

int main(){

    double x;
    double y;
    char op;

    
    
    while(true){

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
        std::cout << "Not a valid response. Please try again!\n";

    }
    std::cout << "\nIf you want to quit, press q or press any other character.\n";
        std::cin >> op;
        if(op == 'q'){
            break;
        }

        }
    

    

    

    return 0;
}