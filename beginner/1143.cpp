#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << i << " " << pow(i,2) << " " << pow(i,3) << endl;
    }
    return 0;
}