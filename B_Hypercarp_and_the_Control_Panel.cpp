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

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bool flag = true;

    int prev = arr[0];
    int previ = -1;
    for(int i=1; i<n; i++){
        if(arr[i]==prev){
            if(previ>0 && previ == i-2){
                int temp = arr[i-1];
                arr[i-1] = arr[previ];
                arr[previ] = temp;
                flag = false;
                break;
            }
            previ = i;
        }
       prev = arr[i];
    }
    if(flag){
        prev = arr[0];
        for(int i=0; i<n; i++){
            if(prev == arr[i]){
                if(i<n-1)
            }
        }
    }
    int cnt = n, j = 1;
    while(j<n){
        if(arr[j]==arr[j-1]){
            cnt--;
        }
        j++;
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