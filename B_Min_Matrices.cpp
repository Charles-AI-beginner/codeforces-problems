#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include<algorithm>
#include<cmath>

using namespace std;

void solve(){
    int n,k;
    cin >> n >> k;
    if(k<n || k>=2*n){
        cout << -1 << "\n";
        return;
    }

    int overlap = 2*n-k;
    int cnt = 1, cnt1 = overlap+1;
    
    for(int i = 0; i<n ;i++){
        for(int j = 0; j<n; j++){
            if(i == j && overlap!=0){
                cout << cnt;
                cnt++;
                overlap--;
            }
            else{
                cout << cnt1;
                cnt1++;
            }
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << "\n";
    }
    
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