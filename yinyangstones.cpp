#include <bits/stdc++.h>

using namespace std;

int main() {
  string wb;
  int w=0, b=0, i;
  cin >> wb;
  for(i=0; i<wb.length(); i++){
    if(wb[i] == 'W'){
      w++;  
    }else{
      b++;  
    }
  }
  
  if(b == w){
     cout << "1" << endl;
  }else{
    cout << "0" << endl;  
  } 
  return 0;
}