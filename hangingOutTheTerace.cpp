#include<iostream>

using namespace std;

int main() {
    int jmlMax, n, out, count, jmlOrang;
    count = out = 0;
    cin >> jmlMax >> n;
    while (n--) {   
        string s;
        cin >> s >> jmlOrang;
        if (s == "leave") {
            count -= jmlOrang;
        }else if (s == "enter") {
            if (count + jmlOrang > jmlMax)
                out++;
            else
                count += jmlOrang;
        }
    }
    cout << out << endl;
}