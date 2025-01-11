
#include <iostream>

using namespace std;

int count_pairs(int n) {
    return (n - 1) / 2 + 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << count_pairs(n) << endl;
    }

    return 0;
}


