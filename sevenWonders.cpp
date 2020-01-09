#include <iostream>

using namespace std;


int main() {
    string s;
    cin >> s;


    int T = 0,C = 0, G = 0;
    for(auto a : s) {
        if(a == 'C') {
            C++;
        }
        if(a == 'T') {
            T++;
        }
        if(a == 'G') {
            G++;
        }
    }

    int jml = min(min(T, C), G) * 7;
    jml += (T*T)+(C*C)+(G*G);
    // if(T!=0 && C!=0 && G!=0){
    //     if(T==C&&C==G){
    //         jml+=7;
    //     }
    //     jml+=7;
    // }

    cout << jml << endl;
}