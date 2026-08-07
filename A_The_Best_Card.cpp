#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include<algorithm>
#include<cmath>

using namespace std;

void solve(){
    int k;
    cin >> k;
    int n = k+1;
    if(k<=2){
        cout << "YES" << "\n";
    }
    else if (n % 2 == 0 || n % 3 == 0){
        cout << "NO" << "\n";
    }
    else{
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0){
                cout << "NO" << "\n";
                return;
            }
        }
        cout << "YES" << "\n"; 
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