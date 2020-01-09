#include <iostream>

using namespace std;

int main() {
    long double radius, radiusKeju, area, areaKeju, a;
    cin >> radius >> a;
    radiusKeju = radius - a;
    area = radius * radius * 3.14159265359;
    areaKeju = radiusKeju * radiusKeju * 3.14159265359;
    long double hasil = (areaKeju / area) * 100;
    cout.precision(10);
    cout << hasil << endl;
}