#include <iostream>
using namespace std;

int main() {
    unsigned int  num;
    cout << "Input: ";
    cin >> num;
    if(num == 0 || num == 1) {
        cout << "The given number is NOT prime";
        return 0;
    }
    for(int i = 2; i <= num/2; i++) {
        if(num%i == 0) {
            cout << "The given number is NOT prime";
            return 0;
        }
    }
    cout << "The given number IS prime";
    return 0;
}