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

        vector<long long> divisible6;
        vector<long long> divisible2;
        vector<long long> divisible3;
        vector<long long> none;

        for(int i=0; i<n; i++) {
            if(v[i]%6==0) {
                divisible6.push_back(v[i]);
            }
            else if(v[i]%2==0) {
                divisible2.push_back(v[i]);
            }
            else if(v[i]%3==0) {
                divisible3.push_back(v[i]);
            }
            else {
                none.push_back(v[i]);
            }
        }

        for(int i=0; i<divisible6.size(); i++) {
            cout<<divisible6[i]<<" ";
        }
        for(int i=0; i<divisible2.size(); i++) {
            cout<<divisible2[i]<<" ";
        }
        for(int i=0; i<none.size(); i++) {
            cout<<none[i]<<" ";
        }
        for(int i=0; i<divisible3.size(); i++) {
            cout<<divisible3[i]<<" ";
        }
    }


    return 0;
}