#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include<algorithm>
#include<cmath>

using namespace std;

void solve(){
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    vector<int> a(x),b(y);
    for(int i=0; i<x; i++){
        int c;
        cin >> c;
        a[i] = c;
    }
    for(int i=0; i<y; i++){
        int c;
        cin >> c;
        b[i] = c;
    }
    int l=n,k=m;
    if(n<m){
        k=m-1;
    }
    else{
        l=n-1;
    }
    int sum = 0;
    if(x<n){
        for(int it:a){
            sum += it;
        }
    }
    else{
        for(int i=0; i<l; i++){
            sum += a[x-i-1];
        }
    }
    if(y<m){
        for(int it:b){
            sum += it;
        }
    }
    else{
        for(int i=0; i<k; i++){
            sum += a[y-i-1];
        }
    }
    cout << sum << "\n";
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