#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <set>

using namespace std;

void solve(){
    int n;
    cin >> n;
    unordered_map<int,int> mp;
    vector<int> a;
    int c;
    for(int i = 0; i<n; i++){
        cin >> c;
        a.push_back(c);
    }
    int cnt1 = 0;
    int cnt23 = 0;
    for(int i=0; i<n-2; i++){
        if(a[i] == 1){
            cnt1++;
        }
        else{
            cnt23++;
        }
        if(cnt1>=cnt23){
            mp[i] = 1;
        }
    }
    int cnt3 = 0;
    int cnt12 = 0;
    bool flag = false;
    for(int i = 1; i<n-1; i++){
        if(a[i] == 3){
            cnt3++;
        }
        else{
            cnt12++;
        }
        if(cnt12 >= cnt3){
            if(mp[i-1] == 1){
                flag = true;
                break;
            }
            else{
                cnt12 = 0;
                cnt3 = 0;
            }
        }
    }
    if(flag) cout << "YES" << "\n";
    else{
        cout << "NO" << "\n";
    }
}

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
