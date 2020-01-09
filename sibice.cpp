#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    double w, h;
    cin >> n >> w >> h;
    double length = sqrt((w*w)+(h*h));

    for(int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        if(inp <= length) {
            cout << "DA" << endl;
        }
        else {
            cout << "NE" << endl;
        }
    }
}