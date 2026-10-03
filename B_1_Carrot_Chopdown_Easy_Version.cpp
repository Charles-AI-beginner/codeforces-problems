#include <iostream>
#include <vector>
#include <string>
#include <map>
#include<algorithm>
#include<cmath>

using namespace std;

void solve(){
    int n,m;
    cin >> n >> m;
    int max_val = 2*m;
    vector<int> freq(max_val+1,0);
    int c;
    for(int i=0; i<n; i++){
        cin >> c;
        if (c > max_val) {
            freq[max_val]++;
        } else {
            freq[c]++;
        }
    }
    int ans = 0, suff = 0;
    for(int i=m; i>=1; i--){
        suff += freq[i];
        int newcarrots = suff+freq[2*i];
        ans = max(ans,newcarrots);
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