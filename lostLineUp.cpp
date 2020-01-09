#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> output(n);
    output[0] = 1;

    for(int i = 2; i <= n; i++) {
        int inp;
        cin >> inp;
        output[inp+1] = i;
    }

    for(auto i : output) {
        cout << i << " ";
    }
    cout << endl;
}