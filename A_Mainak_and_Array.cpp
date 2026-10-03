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
    int c;
    for(int i=0; i<n; i++){
        cin >> c;
        arr[i] = c;
    }
    int max1=arr[n-1]-arr[0],max2=INT_MIN,max3=INT_MIN;
    for(int i=0; i<n; i++){
        if(i>0){
            max1 = max(max1,arr[i-1]-arr[i]);
            max2 = max(max2,arr[i]-arr[0]);
        }
        if(i<n-1){
            max3 = max(max3,arr[n-1]-arr[i]);
        }
    }
    int maxDif = max(max(max1,max2), max3);
    cout << maxDif << "\n";
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