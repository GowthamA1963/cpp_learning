// Source - https://stackoverflow.com/q/56608835
// Retrieved 2026-03-09, License - CC BY-SA 4.0

#include <iostream>
using namespace std;

int main(){
    int x{};
    int y{};

    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    int sum = x + y;
    int diff = x - y;

    cout << x << " + " << y << " is " << sum << "\n";
    cout << x << " - " << y << " is " << diff;

    return 0;
}