#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,s=0;
    cin>>n;
    for(int i=1; i<=n-1; i++){
        int a;
        cin>>a;
        s=s+a;
    }
    cout << (n*(n+1)/2) - s;

    return 0;
}
