#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
#include<cmath>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr;
    bool flag = true;
    for(int i=0; i<n; i++){
        int c;
        cin >> c;
        arr.push_back(c);
        if(i>0 && arr[i-1]-arr[i]<2){
            flag = false;
        }
    }
    if(flag){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
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