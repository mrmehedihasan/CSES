#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long long int lli;

int main(){

    ll t;
    cin>>t;
    for(ll n=1; n<=t; n++){
        cout << (n*n*(n*n-1)/2)-(4*(n-1)*(n-2)) << endl;
    }

    return 0;
}
