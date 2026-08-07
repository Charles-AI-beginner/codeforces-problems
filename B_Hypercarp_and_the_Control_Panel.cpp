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
    vector<int> arr(n);
    int cnt = 0,pr=0,prev=-1;
    bool flag = true;
    for(int i=0; i<n; i++){
        int c;
        cin >> c;
        arr[i] = c;
        if(i>0 && arr[i-1] == arr[i]){
            if(flag && prev>=0){
                if(i>1 && prev == i-2){
                    cnt+=2;
                    flag = false;
                }
            }
            else{
                prev = i;
            }
        }
        else{
            cnt++;
        }
        
    }
    cout << cnt << "\n";
    
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