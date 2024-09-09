#include <iostream>
#include <deque>
#include <string>

int main() {
    std::string customer;
    std::deque<std::string> customers;

    while(std::cin >> customer) {
        if (customer == "FIM") break;
        if (customer == "PROXIMO") {
            std::cout << "PROXIMO: " << customers.front() << std::endl;
            customers.pop_front();
            continue;
        }

        customers.push_back(customer);

        std::cout << "FILA: ";
        for (int i = 0; i < customers.size(); i++) {
            std::cout << customers.at(i);
            if (i < customers.size() - 1) std::cout << " ";
        }
        std::cout << std::endl;
    }
}
