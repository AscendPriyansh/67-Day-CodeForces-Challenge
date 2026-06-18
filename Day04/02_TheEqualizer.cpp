#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n, k;
        cin>>n>>k;

        vector<int>v(n);

        int sum1=0;

        for(int i=0; i<n; i++){
            cin>>v[i];
            sum1+=v[i];
        }


        if(sum1%2!=0 || (n*k)%2==0) {
            cout<<"YES"<<"\n";
        }
        else {
            cout<<"NO"<<"\n";
        }
    }

    return 0;
}