#include <iostream>

using namespace std;

int main() {
  string inp;
  int count = 0;
  cin >> inp;
  for (int i = 0; i < inp.size(); i++) {
    if (inp[i] != 'P' && i % 3 == 0 ){
      count++;  
    }else if (inp[i] != 'E' && i % 3 == 1){
       count++; 
    }else if (inp[i] != 'R' && i % 3 == 2 ){
        count++;  
    }
  }
  cout << count << endl;
}