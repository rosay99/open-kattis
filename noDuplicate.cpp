#include<bits/stdc++.h>

using namespace std;

int main() {
    string temp;
    vector<string> inp;
    
    while(cin >> temp) {
        for (int i = 0; i < inp.size(); i++) {
            if (temp == inp[i]) {
                cout << "no" << endl;
                return 0;
            }
        }
        inp.push_back(temp);
    }
    cout << "yes" << endl;
}