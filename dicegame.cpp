#include <bits/stdc++.h>

using namespace std;

int main(){
    int a1,a2,a3,a4,b1,b2,b3,b4;
    cin>>a1>>a2>>a3>>a4;
    cin>>b1>>b2>>b3>>b4;
    int gunnar=a1+a2+a3+a4;
    int emma=b1+b2+b3+b4;
    if(gunnar>emma){
        cout << "Gunnar" << endl;
    }else if(gunnar<emma){
        cout << "Emma" << endl;
    }else{
        cout << "Tie" << endl;
    }
  return 0;
}