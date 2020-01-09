#include <iostream>

using namespace std;

int main() {

    int x[3], y[3];
    int lx, ly;

    for (int i = 0; i < 3; ++i) {
        cin >> x[i] >> y[i];
    }

    lx = x[0];
    
    if (lx == x[1]){
       lx = x[2]; 
    } else if (lx == x[2]){
        lx = x[1];
    }
        
    ly = y[0];
    
    if (ly == y[1]){
        ly = y[2];
    }
    else if (ly == y[2]){
        ly = y[1];
    }

    cout << lx << " " << ly << endl;

}
