#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string inp;
    cin >> inp;
    string out = inp.substr(inp.size()-2,1);
    cout << out;
}