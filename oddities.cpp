#include <iostream>

using namespace std;

int main() {
    int arr;
    cin >> arr;

    int inp;
    for(int i = 0; i < arr; i++) {
        cin >> inp;
        if(inp % 2 == 0) {
            cout << inp << " is even" << endl;
        }
        else {
            cout << inp << " is odd" << endl;
        }
    }
}