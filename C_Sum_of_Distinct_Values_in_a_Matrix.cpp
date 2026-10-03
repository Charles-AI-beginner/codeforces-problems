#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include<algorithm>
#include<cmath>

using namespace std;

void solve(){
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    vector<int> a(x),b(y);
    int sum1=0,sum2=0
    for(int i=0; i<x; i++){
        int c;
        cin >> c;
        sum1+=c;
        a[i] = c;
    }
    for(int i=0; i<y; i++){
        int c;
        cin >> c;
        sum2+=c;
        b[i] = c;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());


    int sum3=sum1+sum2-b[],sum4=0;

    cout << sum << "\n";
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