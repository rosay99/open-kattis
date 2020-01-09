#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, kalori;
    cin >> n;
    while (n--){
        cin >> kalori;
        cout << ceil(kalori/400.0) << endl;
    }
}