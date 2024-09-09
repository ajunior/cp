#include <iostream>

int main() {
    int n, x, count_plus = 0, count_minus = 0, count_maybe = 0;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> x;
            if (x > 100) {
                std::cout << "-";
                count_minus++;
            }
            else if (x > 90 && x <= 100) {
                std::cout << "o";
                count_maybe++;
            }
            else {
                std::cout << "+";
                count_plus++;
            }

            if (j == n - 1) std::cout << std::endl;
        }
    }
    std::cout << std::endl;

    std::cout << "+: " << count_plus << std::endl;
    std::cout << "o: " << count_maybe << std::endl;
    std::cout << "-: " << count_minus << std::endl;
}
