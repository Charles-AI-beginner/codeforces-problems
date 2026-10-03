#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <numeric>
#include<algorithm>
#include<cmath>

using namespace std;

void solve(){
    int n; 
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int minGcd = gcd(a[0],a[n-1]);
    if(n>2){
        for(int i=2; i<n-1; i++){
            int newGcd = gcd(minGcd,a[i]);
            if(newGcd>minGcd){
                minGcd = newGcd;
            }
        }
    }
    cout << minGcd << "\n";
    
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