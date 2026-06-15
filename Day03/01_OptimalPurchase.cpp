#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        long long n, a, b;
        cin>>n>>a>>b;

        long long div=(n/3);
        long long mod=(n%3);

        long long calc = min(a*div*3, b*div) + min(a*mod, b);

        cout<<calc<<"\n";
    }


    return 0;
}