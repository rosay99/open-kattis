#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n,p;
    cin >> n;
    long answ = 0;
    while(n--){
        cin >> p;
        answ += pow(p/10,p%10); 
    }
    cout << answ << endl;
}