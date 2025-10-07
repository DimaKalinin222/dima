#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    std::srand(std::time(nullptr));
    int b;
    std::cout << "Enter matrix size (N for NxN): ";
    std::cin >> b;

    if (b <= 0) {
        std::cout << "Size must be positive\n";
        return 1;
    }

    int** arr = new int* [b];
    for (int i = 0; i < b; i++) {
        arr[i] = new int[b];
    }

    int sum = 0;
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < b; j++) {
            arr[i][j] = std::rand() % 10;
            std::cout << arr[i][j] << " ";
            if (i == j) sum += arr[i][j];
        }
        std::cout << "\n";
    }

    std::cout << sum << "\n";

    for (int i = 0; i < b; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
