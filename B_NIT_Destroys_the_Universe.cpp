#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include<algorithm>
#include<cmath>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i]>0){
            if(i>0 && arr[i-1]==0){
                cnt++;
            }
            else if(i==0){
                cnt++;
            }
        }
    }
    if(cnt == 0) cout << 0 << "\n";
    else if(cnt == 1) cout << 1 << "\n";
    else cout << 2 << "\n";
    
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