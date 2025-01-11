// #include <bits/stdc++.h>
// using namespace std;

// int main(){


//     int t;
//     cin >> t;  // Read the number of test cases
    
//     while (t--) {
//         int n;
//         cin >> n;  // Read the value of n for each test case
        
//         // The number of valid pairs (a, b) is simply n - 1
//         cout << n - 1 << endl;
//     }
    
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;  // Read the number of test cases
    
//     // Process each test case
//     for (int i = 0; i < t; i++) {
//         int n;
//         cin >> n;  // Read the value of n for this test case
        
//         // The number of valid pairs is simply n - 1
//         cout << n - 1 << endl;
//     }
    
//     return 0;
// }
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


