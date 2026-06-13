#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        vector<int>v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }

        int count0=0;
        int count1=0;
        int count2=0;

        for(int i=0; i<n; i++) {
            if(v[i]==0) count0++;
            if(v[i]==1) count1++;
            if(v[i]==2) count2++;
        }

        int maxOpr=0;

        maxOpr+=count0;
    
        int select = min(count1, count2);
        maxOpr+=select;

        count1-=select;
        count2-=select;

        select = max(count1, count2);

        maxOpr+=(select/3);

        cout<<maxOpr<<"\n";
    }

    return 0;
}