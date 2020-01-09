#include <iostream>


using namespace std;

int main(){
    int n, a,b,c;
    cin >> n;
    while(n--){
        cin >> a >> b >>c;
        if(a + b == c || a * b == c || b * c == a || a * c == b || a - b == c || b - a == c ){
            cout<<"Possible"<< endl;
        }else{
            cout<<"Impossible" << endl;
        }
    }
}