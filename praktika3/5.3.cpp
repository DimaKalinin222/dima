#include <iostream>
#include <cstdlib>
int main() {
    int size;
    int c;
    std::cout << "Введите размер массива: "<<"\n";
    std::cin >> size;
    int nums[size];
    for (int i = 0; i < size; i++){
        nums[i] = rand()%100;
        c = nums[i];
        std::cout << nums[i] << " ";
    }
    int min = nums[0];
    int max = nums[0];
    for (int i = 0; i < size; i++){
        if (nums[i] < min) {
            min = nums[i];
        }
        if (nums[i] > max) {
            max = nums[i];
        }
    }  
    std::cout << "minimum" << min << " ";
    std::cout << "maximum" << max;
    return 0;
}
