#include <iostream>

using namespace std;

int main()
{
    int e,f,c;
    cin >> e >> f >> c;
    int empty = e+f;
    int count = 0;
    while(empty>=c){
        empty = empty-c;
        count++;
        empty++;
    }
    cout << count;
    
    return 0;
}