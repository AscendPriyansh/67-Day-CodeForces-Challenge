#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        vector<vector<int>> v(n, vector<int>(n));
        vector<int> store;
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                cin>>v[i][j];
                store.push_back(v[i][j]);
            }
        }

        int count=0;
        for(int i=1; i<store.size(); i++) {
            if(store[i-1]==store[i]) {
                count++;
            }
        }

        
        
    }

    return 0;
}