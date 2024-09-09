#include <iostream>

int main() {
    int l, c, count = 0;
    std::cin >> l >> c;

    int arr[l][c];
    for (int i = 0; i < l; i++) {
       for (int j = 0; j < c; j++) {
           std::cin >> arr[i][j];
           std::cout << arr[i][j] << std::endl;
       }
    }


}
