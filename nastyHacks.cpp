#include <iostream>

using namespace std;

int main() {
    int arr,r,e,c;
    cin >> arr;
      for(int i = 0; i < arr; i++) {
        cin >> r >> e >> c;
        if(e - c == r) {
            cout << "does not matter" << endl;
        }
        else if(e - c > r) {
            cout << "advertise" << endl;
        }
        else {
            cout << "do not advertise" << endl;
        }
      }
}