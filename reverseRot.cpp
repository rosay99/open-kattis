#include <iostream>
#include <algorithm>//reverse
#include <string>

using namespace std;


int main() {
    int encrypt;
    string inp;
    while(cin>>encrypt && cin>>inp) {
        reverse(inp.begin(),inp.end());
        for(int j = 0; j < inp.length(); j++) {
            for(int i = 0; i < encrypt; i++) {
                inp[j]++;
                if(inp[j] == '_' + 1) {
                    inp[j] = '.';
                }
                if(inp[j]== 'Z' + 1) {
                    inp[j] = '_';
                }
                if(inp[j] == '.' + 1) {
                    inp[j] = 'A';
                } 
            }
        }
        cout << inp << endl;
    }
}