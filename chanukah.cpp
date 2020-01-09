#include <iostream>

using namespace std;

int main(){
    int n,a,b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        cout << a << " " << b*(b+1)/2+b <<endl;
    }
}