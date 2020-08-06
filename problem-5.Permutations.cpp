#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long long int lli;

int main(){
    int n;
    cin >> n;
    if(n==1){
        cout << 1;
    }
    else if(n<4){
        cout << "NO SOLUTION";
    }else if(n==4){
        cout << "3 1 4 2";
    }else{
        for(int i =1; i<=n; i+=2){
            cout << i <<" ";
        }
        for(int i=2; i<=n; i+=2){
            cout <<i;
            if(i<n-1){
                cout << " ";
            }else{
                cout << endl;
            }
        }
    }
}
