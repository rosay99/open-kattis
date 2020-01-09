#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int D, M;
    string days[] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> D >> M;
    for (int i = 0; i < M - 1; i++) {
            D += months[i];
        }
    cout << days[D%7];
}