#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,n,ptr=0;
    cin>>t;
    string s;
    while(t--){
        cin>>n;
        vector<string>place;
        for(int j=0;j<n;j++)
        {
            cin>>s;
            bool stat=false;
            int a=0;
            while(a<place.size()&&!stat)
            {
                if(place[a]==s){
                    stat=true;
                }
                a++;
            }
            if(!stat){
                place.push_back(s);
            }
        }
        cout<<place.size()<<endl;
    }

}