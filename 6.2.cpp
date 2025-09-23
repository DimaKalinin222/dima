#include <iostream>
using namespace std;

int main() {
    int b;
    cout << "Enter N: ";
    cin >> b;

    if (b < 1 || b > 100) {
        cout << "N must be from 1 to 100\n";
        return 1;
    }

    for (int i = 0; i < b; i++) {
        for (int j = 0; j < b; j++) {
            if (i + j < b - 1)
                cout << 0;
            else if (i + j == b - 1)
                cout << 1;
            else
                cout << 2;

            if (j < b - 1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}