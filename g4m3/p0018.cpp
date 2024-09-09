#include <iostream>

int main() {
    int n;
    std::cin >> n;
    while (n >= 1) {
        std::cout << n << std::endl;
        if (n == 1) break;

        if (n % 2 == 0) n /= 2;
        else n = (n*3) + 1;
    }
}
