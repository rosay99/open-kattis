#include <iostream>

using namespace std;

int main() {
    double n;
    double q,y,temp,answ=0;
    cin >> n;
    while(n--){
        cin >> q >> y;
        temp=q*y;
        answ+=temp;
    }
    cout << answ << endl;
}