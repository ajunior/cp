#include <iostream>
#include <cmath>
#include <vector>

int main() {
    int c, n, moves = 0;
    std::vector<int> coins;

    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> c;
        coins.push_back(c);
    }

    int middle = std::ceil(n / 2);
    bool left_turn = true;


    for (int i = 0, j = n - 1; i < middle && j > middle; i++, j--) {
        if (left_turn) {
            coins[i+1] =  coins[i] + coins[i+1];
            coins[i] = 0;
            moves++;

            coins[j-1] =  coins[j] + coins[j-1];
            coins[j] = 0;
            moves++;

            left_turn = false;
        } else {
            coins[i+1] =  coins[i] + coins[i+1];
            coins[i] = 0;
            moves++;

            coins[j-1] =  coins[j] + coins[j-1];
            coins[j] = 0;
            moves++;

            left_turn = true;
        }
    }

    std::cout << moves << std::endl;
}
