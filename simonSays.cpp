#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int n;
    string inp;
    cin >> n;
    getline(cin,inp); 
    for(int i = 0; i < n; ++i){
        getline(cin,inp);
        if(inp.substr(0,10).compare("Simon says") == 0){ //return 0 : if both strings are equal.
           cout <<  inp.substr(10) << endl;
        }
    }
}