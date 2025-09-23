#include <iostream>
#include <vector>

int main() {
    int b;
    std::cout << "Enter number of students: ";
    std::cin >> b;

    if (b <= 0 || b > 1000) {
        std::cout << "Number of students must be from 1 to 1000\n";
        return 1;
    }

    std::cout << "Enter " << b << " numbers (0..9), separated by space:\n";

    std::vector<int> stack;
    int total = 0;

    for (int i = 0; i < b; i++) {
        int x;
        std::cin >> x;
        if (!stack.empty() && stack.back() == x) {
            stack.pop_back();
            total += 2;
        }
        else {
            stack.push_back(x);
        }
    }

    std::cout << "Total students who went to KFC: " << total << "\n";
    return 0;
}