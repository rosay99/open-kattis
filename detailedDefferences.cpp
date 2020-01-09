#include <iostream>
#include <string>

using namespace std;

int main() {
    int arr;
    cin >> arr;
    for(int i = 0; i < arr; i++) {
        string a, b;
        cin >> a >> b;

        cout << a << endl;
        cout << b << endl;

        int length = a.size();
        for(int j = 0; j < length; j++) {
            if(a[j] == b[j]) {
                cout << '.';
            }
            else {
                cout << '*';
            }
        }

        cout << endl;
    }
}