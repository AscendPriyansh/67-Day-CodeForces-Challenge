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

        for(int i=1; i<2*n; i++) {
            if(i%2!=0) {
                cout<<i<<" ";
            }
        }
        cout<<"\n";
    }


    return 0;
}