#include <iostream>

int main(){
    double x{};
    double y{};
    char o{};

    std::cout << "Enter the first number : ";
    std::cin >> x;

    std::cout << "Enter the second number : ";
    std::cin >> y;

    std::cout << "What operation do you want the numbers to perform? (+,-,*,/)";
    std::cin >> o;

    if (o == '+') {
        std::cout << x << " " << o << " " << y << " is " << x + y; 
    } 
    else if (o == '-') {
        std::cout << x << " " << o << " " << y << " is " << x - y; 
    } 
    else if (o == '*') {
        std::cout << x << " " << o << " " << y << " is " << x * y;
    } 
    else if (o == '/') {
        if (y != 0) {
            std::cout << x << " " << o << " " << y << " is " << x / y;
        } 
        else {
            std::cout << "Invalid!";
        }
    } 
    else {
        std::cout << "Invalid operator!";
    }

    return 0;
}