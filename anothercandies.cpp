#include <iostream>

using namespace std;
typedef unsigned long long ull;

int main() {
    int t;
    cin >> t;

    for(int i=0;i<t;i++) {
        int n;
        cin >> n;

        int count=0;

        for(int j=0;j<n;j++) {
            ull candies;
            cin >> candies;
            count += candies%n;
        }

        if(count%n == 0) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
