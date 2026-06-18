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

        for(int i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                if(v[i]<v[j]) {
                    v[j]=v[i];
                }
            }
        }

        int sum=0;
        for(int i=0; i<n; i++) {
            sum+=v[i];
        }

        cout<<sum<<"\n";
    }

    return 0;
}