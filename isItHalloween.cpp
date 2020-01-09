#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string m, d;
    cin >> m >> d;
    if (m=="OCT"&&d=="31"){
        cout << "yup";
    }else if (m=="DEC"&&d=="25"){
        cout << "yup";
    }else{
        cout << "nope";
    }
}