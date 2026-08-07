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
    pair<int,int> mx(-1,-1);
    unordered_map<int,int> mpp;
    int sum = 0;
    for(int i=0; i<n; i++){
        int c;
        cin >> c;
        mpp[c]++;
        if(mpp[c]>mx.first) mx = {mpp[c],c};
        else if(mpp[c] == mx.first && c<mx.second) mx = {mpp[c],c};
        sum+=c;
    }
    if(mx.first <= (n+1)/2){
        cout<<sum<<"\n";
    }
    else{
        int f = mx.first, v = mx.second;
        int health = sum - f*v + v*(n-f+2);
        cout << health << "\n";
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