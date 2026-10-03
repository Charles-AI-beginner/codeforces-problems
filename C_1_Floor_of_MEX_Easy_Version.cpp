#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include<algorithm>
#include<cmath>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<bool> mp(n,false);
    for(int i=1; i<n+1; i++){
        int c;
        cin >> c;
        long long j = 1LL*i*c;
        if(j==0){
            if(n>0) mp[j] = true;
            continue;
        }
        while(j<n && (j<1LL*i*(c+1))){
            mp[j] = true;
            j++;
        }
    }
    vector<int> ans;
    for(int i=0; i<n; i++){
        if(!mp[i]){
            ans.push_back(i);
        }
    }
    int size = ans.size();
    cout << size << "\n";
    
    for(int i=0; i<size; i++){
        
        cout << ans[i];
        if(i<size-1) cout << " ";
    }
    cout << "\n";
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