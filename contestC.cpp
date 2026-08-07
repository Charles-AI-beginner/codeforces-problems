#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
#include<cmath>

using namespace std;

void solve(){
    
    int n;
    cin >> n;

    int oddN = 0, c;
    for(int i=0; i<n; i++){
        
        cin >> c;
        if(c%2 != 0){
            oddN++;
        }
    }
    
    if(oddN % 2 == 0){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
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