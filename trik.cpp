#include <bits/stdc++.h>
using namespace std;

int main() { 
  string inp;
  cin >> inp;
  vector<int> cup = {1, 0, 0};
  for (int i = 0; i < inp.size(); i++) {
    if (inp[i] == 'A') {
      swap(cup[0], cup[1]);
    } else if (inp[i] == 'B') {
      swap(cup[1], cup[2]);
    } else if (inp[i] == 'C') {
      swap(cup[0], cup[2]);
    }
  }
  for (int i = 0; i < 3; i++) {
    if (cup[i] == 1) {
      cout << i + 1 << endl;
    }
  }
}