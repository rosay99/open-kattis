#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int n,p,q;
	cin >> n >> p >> q;

    p += q;

    if((p / n) % 2 == 0) {
        cout << "paul" << endl;
    } else {
        cout << "opponent" << endl;
    }
	return 0;
}