#include <iostream>

using namespace std;

int main(){
    int k,n;
    cin >> k;
    cin >> n;
    int sum = 0;
    while(n--){
        int t;
        char z;
        cin >> t >> z;
        sum += t;
        if(sum >= 210){
            break;
        }
        if(z == 'T'){
            k++;
        }
    }
    k = k % 8;
    if(k==0){
        k=8;
    }
    cout << k << endl;
    return 0;
}