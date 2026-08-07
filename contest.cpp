#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>

using namespace std;

const long long maxint = 1000000007LL;
int d;
int l;
int fl;
int ans;
void solve(){
    d=l=fl=ans=0;
    int n;
    cin >> n;
    vector<int> arr(n+1);
    int count = 0;
    long long sum = 0;
    for(int i=1; i<=n; i++){

        cin >> arr[i];
        if(arr[i] == -1) fl = 1;
        if(arr[i] != arr[i-1]){
            d++;
            if(arr[i] - arr[i-1] == 1 && i>1){
                l++;
            }
        }
    }
    if(fl) ans = l+1;
        else ans = 1;
        for(int i=1; i<=(n-d); i++){
            ans = (2*ans)%maxint;
        }
    cout << ans << "\n";
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
