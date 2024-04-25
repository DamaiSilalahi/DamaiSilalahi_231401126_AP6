#include <iostream>

using namespace std;

int main() {
    int x, y = 1;

    cout << "Masukkan row: ";
    cin >> x;

   
    for (int i = 1; i <= x; i++) {
        
        for (int j = 1; j <= i; j++) {
            cout << y << " ";
            y++;
        }
        cout << endl; 
    }

    return 0;
}