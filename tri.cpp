#include <iostream>

using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    if(x+y==z){
        cout << x << "+" << y << "=" << z << endl;
    } else if (x-y == z){
        cout << x << "-" << y << "=" << z << endl;
    } else if (x == y-z){
        cout << x << "=" << y << "-" << z << endl;
    } else if (x*y == z){
        cout << x << "*" << y << "=" << z << endl;
    } else if (x/y == z && x%z == 0){
        cout << x << "/" << y << "=" << z << endl;
    } else if (x == y+z){
        cout << x << "=" << y << "+" << z << endl;
    } else if (x == y*z){
        cout << x << "=" << y << "*" << z << endl;
    } else if (x == y/z && y%z == 0){
        cout << x << "=" << y << "/" << z << endl;
    }
}