#include <iostream>

using namespace std;

int main()
{
  int printer = 1, day = 0;
  int in;
  cin >> in;
  while(printer < in){
      printer=printer*2;
      day+=1;
  }
  day+=1;
  cout << day;
}
