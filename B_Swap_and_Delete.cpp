#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

void solve(){
    int n,p;
    cin >> n >> p;
    multimap<int,int> mp;
    vector<int> a(n),b(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    for(int i=0; i<n; i++){
        mp.insert({b[i],a[i]});
    }
    long long cost = p;
    for(auto& it:mp){
        if(it.first <= p){
            while(n-1 != 0 && it.second != 0){
                cost += it.first;
                it.second--;
                n--;
            }
        }
        else{
            cost += 1LL*(n-1)*p;
            break;
        }
    }
    cout << cost << "\n";
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