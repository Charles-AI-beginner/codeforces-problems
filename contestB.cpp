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
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int size;
    unordered_map<int,int> trackGrp1;
    unordered_map<int,int> trackGrp12;
    trackGrp1[0] = 0;
    trackGrp12[0] = 0;
    int cnt1 = 0;
    int cnt12 = 0;
    for(int i=0; i<n-1; i++){
        if(arr[i] == 1){
            cnt1++;
            if(i>0) cnt12++;
        }
        else if(arr[i]==2){
            if(i>0) cnt12++;
            cnt1--;
        }
        else{
            cnt1--;
            if(i>0) cnt12--;
        }
        if(i<n-2) trackGrp1[i] = cnt1;
        if(i>0){
            trackGrp12[i] = cnt12;
        }
    }
    int MIN = 1e9+7;
    for(int i = 0; i<n-2; i++){
        if(trackGrp1[i]>=0){
            MIN = min(MIN,trackGrp12[i]);
        }
        if(MIN != 1e9+7 && MIN<=trackGrp12[i+1]){
            cout << "YES" << "\n";
            return;
        }
        
    }
    cout << "NO" << "\n";
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
