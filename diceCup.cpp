#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if(m < n) {
        swap(n, m);
    }

    for(int i = n + 1; i < m + 2; i++) {
        cout << i << endl; //print antara n->m
    }
}