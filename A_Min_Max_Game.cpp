#include <iostream>
#include <vector>
#include <string>
#include <map>
#include<algorithm>
#include<cmath>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int cnt0=0, cnt1=0, c;
    for(int i=0; i<n; i++){
        cin >> c;
        if(c==0) cnt0++;
        else cnt1++;
    }

    if(cnt1+1<=cnt0) cout << "Elsie" << "\n";
    else cout << "Bessie" << "\n";
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