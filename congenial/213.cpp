#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    float r;

    cin >> a >> b >> c >> d >> e >> f;
    r = ((a + b) * (c - d) * (e + f)) / 2.0;
    cout << "Eu sou FERA nas continhas e o resultado é " << setprecision(1) << fixed << r << endl;

    return EXIT_SUCCESS;
}