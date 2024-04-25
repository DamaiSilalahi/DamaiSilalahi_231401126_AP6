#include <iostream>

using namespace std;

int main() {
    int x, y = 0, digit;

    cout << "Input: ";
    cin >> x;

   
    if (x < 0) {
        cout << "Angka tidak valid. Angka berupa negatif." << endl;
        
    }

    while (x != 0) {
        digit = x % 10;
        y += digit;
        x /= 10;
    }

    cout << "Output: " <<" : " << y << endl;
}