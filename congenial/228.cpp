#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float x, y;
    cin >> x >> y;
    cout << setprecision(2) << fixed << x + y << endl;

    return EXIT_SUCCESS;
}
