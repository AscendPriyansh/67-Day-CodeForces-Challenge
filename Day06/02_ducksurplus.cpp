#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        vector<long long> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        for(int i=1; i<n; i++) {
            if(!(v[i-1]<=v[i])) {
                swap(v[i-1], v[i]);
                v[i]+=v[i-1];
            }
        }

        long long maxi=INT_MIN;
        for(int i=0; i<n; i++) {
            if(maxi<v[i]) {
                maxi=v[i];
            }
        }

        cout<<maxi<<"\n";
    }


    return 0;
}