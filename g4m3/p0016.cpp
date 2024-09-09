#include <iostream>

int main() {
    int count = 0, n;

    std::cin >> n;

    while(n >= 1) {
        n /= 2;
        count++;
    }
    std::cout << count << std::endl;
}
