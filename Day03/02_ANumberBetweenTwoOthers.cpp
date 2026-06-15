#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        long long x, y;
        cin>>x>>y;

        long long o = y/x;

        if(o>2) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

    return 0;
}