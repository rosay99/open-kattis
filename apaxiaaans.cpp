#include <iostream>
#include <string>
using namespace std;

int main() {

    string outputR;
    string inChar;
    char previous;
    int i = 0;

    getline(cin, inChar);
    outputR += inChar[0];
    previous = inChar[0];


    while (i < inChar.length())
    {
        i++;
        if (inChar[i] != previous)
        {
            outputR += inChar[i];
        }
        previous = inChar[i];
    }

    cout << outputR << endl;
}