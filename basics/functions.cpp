// Source - https://stackoverflow.com/q/56608835
// Retrieved 2026-03-09, License - CC BY-SA 4.0

#include <iostream>
using namespace std;

int readNumber(){
    cout << "Enter the numbers to add : ";
    int x{};
    cin >> x;

    return x;
}
void writeAnswer(int x){
    cout << "The sum of the two numbers is: " << x;
}

int main(){

    int x{readNumber()};
    int y{readNumber()};
    writeAnswer(x+y);

    return 0;
    
}