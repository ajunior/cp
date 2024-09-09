#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::string product;
    std::unordered_map<std::string, int> products;

    while(std::cin >> product) {
        if (product == "FIM") break;
        products[product]++;
        std::cout << product << " " << products[product] << std::endl;
    }
}
