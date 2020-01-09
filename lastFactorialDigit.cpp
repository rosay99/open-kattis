#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    int n;
    while(t--) {
        cin >> n;
        int output = 1;
        for(int i = 1; i <= n; i++) {
            output *= i;
            output %= 10;
        }
        cout << output << endl;
    }
}