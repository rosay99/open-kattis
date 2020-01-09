#include <bits/stdc++.h>

using namespace std;

int main(){
  vector<string> name, sorted;
  string temp;
  int n, i;
  
  cin >> n;
  while(n--){
    cin >> temp;
    name.push_back(temp);
    sorted.push_back(temp);
  }
  
  sort(sorted.begin(), sorted.end());  //urutkan scra ASC   
  
  if(name == sorted){    
    cout << "INCREASING" << endl;
  }
  
  else{
    reverse(sorted.begin(), sorted.end()); //urutkan scra DSC
    if(name == sorted){
        cout <<  "DECREASING" << endl;
    }else {
        cout << "NEITHER" << endl;
    }
  }
  return 0;
}