#include <iostream>

using namespace std;

int main() {
    int n;
    int mj = -1, val = -1;
    cin >> n;
    for(int i=0;i<n;i++){
        int j;
        cin >> j;
        if (mj == -1 or j < mj) {
          mj = j;
          val = i;
        }
    }
    cout << val << endl;
}