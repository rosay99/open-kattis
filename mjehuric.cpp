#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> arr(5);
  
  for (int i=0; i<arr.size();i++) {
    cin >> arr[i];
  }
  
  for (int i=0; i<arr.size(); i++) {
    for (int j=0; j<arr.size()-1; j++) {
      if (arr[j] > arr[j+1]) {
        swap(arr[j], arr[j+1]);
        for (int k=0; k < arr.size(); k++) {
          cout << arr[k] << " ";
        }
        cout << endl;
      }
    }
  }
  return 0;
}