// Source - https://stackoverflow.com/q/56608835
// Retrieved 2026-03-09, License - CC BY-SA 4.0

#include <iostream>

int main(){

    char c{};
    std::cout << "Enter a character: ";
    std::cin >> c;

    std::cout << "The value of the ch in ASCII is: " << static_cast<int>(c) << "\n";  //typecasted char to int using static_cast<>
    
    return 0;
}