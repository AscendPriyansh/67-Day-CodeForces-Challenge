#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        vector<int> v(7);
        for(int i=0; i<7; i++) {
            cin>>v[i];
        }

        sort(v.begin(), v.end());

        int calc=0;

        for(int i=0; i<6; i++) {
            calc+=v[i];
        }

        calc*=-1;
        calc+=v[6];

        cout<<calc<<"\n";
    }


    return 0;
}