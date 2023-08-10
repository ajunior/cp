#include <iostream>
using namespace std;

int main() {
    int n, hours, minutes, seconds;

    cin >> n;

    hours = n / 3600;
    n = n % 3600;

    minutes = n / 60;
    seconds = n % 60;

    cout << hours << "h " << minutes << "m " << seconds << "s" << endl;
    return 0;
}
