#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string inp;
    cin>>inp;
    bool hiss=false;
    for(int i=0;i<inp.length()-1;i++){
        if(inp.substr(i,2)=="ss"){
            hiss=true;
        }
    }
    if(hiss){
        cout<<"hiss\n";
    }else{
        cout<<"no hiss\n";
    }

}