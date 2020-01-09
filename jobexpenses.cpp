
#include <iostream>

using namespace std;

int main() {
    int n, t;
	cin >> n;

	int total = 0;
	for(int i = 0; i < n; i++) {
		cin >> t;

		if(t < 0) {
			total -= t;
		}
	}

	cout << total << endl;

}