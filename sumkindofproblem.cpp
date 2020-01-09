#include <iostream>

using namespace std;


int positive(int n) {
    int total = 0;
    for(int i = 0; i <= n; i++) {
        total += i;
    }
    return total;
}

int odd(int n) {
    int total = 0;
    for(int i = 1; i < 2*n; i+=2) {
        total += i;
    }
    return total;
}

int even(int n) {
    int total = 0;
    for(int i = 0; i < 2*n+1; i+=2) {
        total += i;
    }
    return total;
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        cin >> inp;

        cout << i+1 << " " << positive(inp) << " " << odd(inp) << " " << even(inp) << endl;
    }
    
}