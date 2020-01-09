#include <iostream>

using namespace std;

int main() {
    int skor[5][4];
    
    //input matrix;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> skor[i][j];
        }
    }
    //jumlah per line
    for(int i = 0; i < 5; i++) {
        for(int j = 1; j < 4; j++) {
            skor[i][0] += skor[i][j];
        }
    }


    int max = -1;
    int win = -1;
    for(int i = 0; i < 5; i++) {
        if(skor[i][0] > max) {
            max = skor[i][0];
            win = i;
        }
    }
    cout << win+1 << " " << max << endl;
}