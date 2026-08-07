#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

using namespace std;


void solve(){
    
    int n;
    cin>>n;
    vector<int> h;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        h.push_back(x);
    }
    auto maxx = max_element(h.begin(),h.end());
    int maxVal = *maxx;
    auto minn = min_element(h.begin(),h.end());
    int minVal = *minn;

    cout<<maxVal-minVal+1<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}