#include <iostream>
#include <cstdlib>
int main() {
    int size;
    std::cout << "Введите размер массива: "<<"\n";
    std::cin >> size;
    int arr[size];
    int chet = 0;
    int nechet = 0;
    for (int i = 0; i < size; i++){
        int c;
        arr[i] = rand()%10;
        c = arr[i];
        if (c%2!=0){
            nechet++;
        }
        else{
            chet++;
        }
        std::cout << c << ' ';
    }
    std::cout << "\n";
    std::cout << "chet"<<" = "<<chet<<"\n"<<"nechet"<<" = "<<nechet;
}
