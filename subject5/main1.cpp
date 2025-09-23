#include <iostream>
#include <cstdlib>
int main() {
    int size;
    double sred = 0;
    std::cout << "Введите размер массива: "<<"\n";
    std::cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++){
        int c;
        arr[i] = rand()%10;
        c = arr[i];
        sred = sred + c;
        std::cout << arr[i] << ", ";
    }
    std::cout << "sredniy"<<"="<<sred/size;
}