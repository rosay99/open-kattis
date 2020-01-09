#include <iostream>
#include <vector>
#include <algorithm> //buat sorting

using namespace std;

int main(){
    vector<int> inp;
    for(int i = 0; i < 4; ++i){
        int temp;
        cin >> temp;
        inp.push_back(temp);
    }
    sort(inp.begin(), inp.end());
    cout << (inp[0] * inp[2]) << endl;
}