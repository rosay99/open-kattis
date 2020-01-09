#include <iostream>

using namespace std;

int main()
{
   int n;
   int count=0;
   double jml=0;
   int x = -1;
   cin>>n;
   int arr[n];
   for (int i=0;i<n;i++){
       cin>>arr[i];
       if(arr[i]!=x){
           count++;
           jml+=arr[i];
       }
   }
   cout<<jml/count;
}