#include <iostream>

using namespace std;

int main(){
    string str;
    cin>>str;
    int best = 0, occr = 1;
    for(int i=1; i<str.length(); i++){
        if(str[i]!=str[i-1]){
            best = max(occr, best);
            occr = 0;
        }
        occr++;
    }
    best = max(occr, best);
    cout << best;
    return 0;
}
