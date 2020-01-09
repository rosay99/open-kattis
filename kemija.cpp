#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string inp;
        cin >> inp;

        vector<vector<char>> v;

        int size = sqrt(inp.length()); 
        v.resize(size);//panjang matrix
        for(int j = 0; j < size; j++) {
            v[j].resize(size);
            for(int k = 0; k < size; k++) {
                v[j][k] = inp[j*size+k];
            }
        }

        for(int j = size-1; j >= 0; j--) {
            for(int k = 0; k < size; k++) {
                cout << v[k][j];
            }
        }
        cout << endl;
    }
}