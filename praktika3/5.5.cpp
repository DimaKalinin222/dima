#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    std::srand(std::time(nullptr));
    int n, m;
    std::cout << "Enter number of rows: ";
    std::cin >> n;
    std::cout << "Enter number of columns: ";
    std::cin >> m;

    if (n <= 0 || m <= 0) {
        std::cout << "Rows and columns must be positive\n";
        return 1;
    }

    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }

    int sum = 0;
    std::cout << "Array:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = std::rand() % 100; 
            std::cout << arr[i][j] << "\t";
            sum += arr[i][j];
        }
        std::cout << "\n";
    }

    std::cout << "Sum of all elements: " << sum << "\n";

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
