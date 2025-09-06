#include <bits/stdc++.h>
using namespace std;

int fibb(int n) {
    if (n == 0 || n == 1) return n;
    return fibb(n - 1) + fibb(n - 2);
}

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        int n;
        cin >> n;  // input the nth Fibonacci number to compute
        cout << fibb(n) << endl;
    }
    return 0;
}
