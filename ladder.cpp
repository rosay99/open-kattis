#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int v, h;
    cin >> v >> h;
    cout << static_cast<int>(v / sin(h*M_PI/180.0)) + 1;
}