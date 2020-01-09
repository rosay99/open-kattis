#include <iostream>
#include <string>

using namespace std;

int main(){
    while(true) {
        int sweet, sour;
        cin >> sweet >> sour;
        if(sweet == 0 && sour == 0) {
            return 0;
        }
        if(sweet+sour==13){
            cout << "Never speak again." << endl;
        }else if(sweet==sour){
            cout << "Undecided." << endl;
        }else if(sweet>sour){
            cout << "To the convention." << endl;
        }else if (sweet<sour){
            cout << "Left beehind." << endl;
        } 
    }
}