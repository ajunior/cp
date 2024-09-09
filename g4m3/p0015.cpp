#include <algorithm>
#include <iostream>
#include <list>

int main() {
    int a, n;
    std::list<int> seeds;

    std::cin >> n;

    while(seeds.size() < n) {
        std::cin >> a;

        if (a == 0) {
            seeds.sort();
            std::cout << seeds.back() << std::endl;
            seeds.pop_back();
        } else {
            seeds.push_back(a);
        }
    }
}
