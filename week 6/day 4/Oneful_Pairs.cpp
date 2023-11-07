#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    if (a + b + (a * b) == 111) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
