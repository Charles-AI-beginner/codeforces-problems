#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    int ans = INT_MAX;
    int c,a,freq = 0,m;
    for(int i=0; i<n; i++){

        cin >> c;
        if(k==4){
            if(c%2 == 0){
                freq++;
            }
        }
        if(c%k != 0){
            a = k-((c+k)%k);
            ans = min(ans,a);
        }
        else{
            ans = 0;
        }     
    }
    if(k==4){
        if(freq >= 2) ans = 0;
        else if(freq == 0) ans = min(ans,2);
        else{
            ans = min(ans,1);
        }
    }
    cout << ans << "\n";
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}