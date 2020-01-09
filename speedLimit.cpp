#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n != -1){
        int tbefore = 0;
        int jml= 0;
        for(int i = 0; i < n; ++i){
            int s,t;
            cin >> s >> t;
            jml+= s*(t-tbefore);
            tbefore = t;
        }
        cout << jml << " miles" << endl;
        cin >> n;
    }
}