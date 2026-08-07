#include <iostream>
#include <iterator>
#include <vector>
#include<algorithm>
#include<cmath>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);

    bool flag = true;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count = 0;
    int small = *min_element(arr.begin(),arr.end());
    for(int i = 0; i<n; i++){
        if(arr[i] == small) count++;
    }
    if(count != n){
        cout << count << " " << n-count << "\n";
        for(int i=0; i<count; i++){
            cout << small << " ";
        }
        cout << "\n";
        for(int i=0; i<n; i++){
            if(arr[i] != small){
                cout << arr[i] << " ";
            }
        }
        cout << "\n";
    }
    else{
        cout << -1 << "\n";
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