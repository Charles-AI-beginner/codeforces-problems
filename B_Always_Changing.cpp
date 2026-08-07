#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include<algorithm>
#include<cmath>

using namespace std;

void solve(){
    int k;
    cin >> k;
    vector<int> arr;
    int cnt = 0;
    int x = 0;
    for(int i=0; i<k; i++){
        int c;
        cin >> c;
        arr.push_back(c);
    }
    int cur_el = arr[0];
    for(int i=0; i<k; i++){
        if(arr[i] == cur_el){
            cnt++;
            cur_el = !cur_el;
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