#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

void solve() {
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(n<2){
        cout << a[0] << "\n";
        return;
    }
    else{
        sort(a.begin(),a.end(),greater<int>());
        int firstmax = a[0];
        int secondmax = a[1];
        for(int j = 2; j<n; j++){
            if(a[j] == a[j-2]%a[j-1]){
                continue;
            }
            else{
                cout << -1 << "\n";
                return;
            }
        }
        cout << firstmax << " " << secondmax << " ";
        cout << "\n";
    }


}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
    
    return 0;
}
