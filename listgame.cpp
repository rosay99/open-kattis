#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count=0;
    int factor=2;
    while (factor*factor <= n)
    {
        if (n % factor == 0)
        {
            n /= factor;
            count++;
        }
        else
        {
            factor++;
        }
    }
    cout << count + 1;
    
    return 0;
}