#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int output = max(b-a, c-b);
    output--;

    cout << output << endl;
}