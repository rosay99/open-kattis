#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> keep(365,false);
    
    for(int i = 0; i < n; i++) {
        int day1, day2;
        cin >> day1 >> day2;

        for(int j = day1-1; j <= day2-1; j++) {
            keep[j] = true;
        }
    }

    int sum = 0;
    for(int i = 0; i < 365; i++) {
        if(keep[i]) sum++;
    }

    cout << sum << endl;
}