#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n,x;
    for(int i = 0; i<t; i++){
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int maxD = a[0];
        for(int j=1; j<n; j++){
            maxD = max(maxD,(a[j]-a[j-1]));
        }
        maxD = max(maxD,2*(x-a[n-1]));
        cout << maxD << endl;
    }


}