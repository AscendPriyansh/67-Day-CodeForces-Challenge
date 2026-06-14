#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        int cost=0;
        for(int i=0; i<n; i++) {
            if(v[i]!=1) cost+=v[i];
        }

        if(v[n-1]==1) {
            cost+=1;
        }

        cout<<cost%676767677<<"\n";
    }


    return 0;
}