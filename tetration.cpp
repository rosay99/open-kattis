#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double inp;
    cin >> inp;

    cout << fixed;
    cout.precision(6);

    cout << pow(inp, (1/inp)) << endl;
}
