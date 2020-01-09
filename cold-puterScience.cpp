#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, count=0;
    cin >> n;
    while(n--) {
        int tmp;
        cin >> tmp;
        if(tmp<0){
            count++;
        }
    }
    cout << count;
}