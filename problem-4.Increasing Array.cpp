#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main(){
    lli t;
    lli a,b;
    lli sum=0;
    cin>>t;
    cin>>a;
    for(int i=1; i<t; i++){
        cin>>b;
        if(a>b){
            sum+=(a-b);
        }else{
            a=b;
        }
    }
    cout << sum;


    return 0;
}
