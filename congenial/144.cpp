#include <iostream>

using namespace std;

int main() {
    int p;
    cin >> p;

    (p % 42 == 0) ? cout << "Sim\n" : cout << "Nao\n";

    return EXIT_SUCCESS;
}
