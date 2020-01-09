#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double b, p;
    cin >> n;
    while(n--){
        cin >> b >> p;
        double ans = 60.0 * (b / p);
        double var = 60.0 / p;

        cout << fixed;
        cout.precision(4);
        cout << ans - var << " " << ans << " " << ans + var << endl;
    }
}