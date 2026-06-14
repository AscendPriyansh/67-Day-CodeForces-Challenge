#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        if(n==1) {
            cout<<n<<"\n";
            continue;
        }

        vector<int> v;

        int idx=1;
        while(idx<=n) {
            v.push_back(idx);
            idx+=2;
        }

        idx=2;
        while(idx<=n) {
            v.push_back(idx);
            idx+=2;
        }

        for(int i=0; i<n; i++) {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}