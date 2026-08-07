#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int j = 0; j<n; j++){
            cin >> a[j];
        }
        int mn = *min_element(a.begin(), a.end());
        if(a[0] == mn) cout << "YES\n";
        else cout << "NO\n";
    }

}