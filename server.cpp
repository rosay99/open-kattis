#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    int i;
    int total = 0;
    for(i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        total += temp;
        if(total > t) {
            break;
        }
    }
    cout << i << endl;
}