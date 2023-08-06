#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int
main() {
    int n, r;
    vector<int> records;
    vector<int>::iterator p;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> r;
        records.push_back(r);
    }

    reverse(records.begin(), records.end());

    for(p = records.begin(); p < records.end(); p++) {
        cout << *p;

        if(p < records.end() - 1) cout << " ";
    }
    cout << endl;

    return EXIT_SUCCESS;
}
