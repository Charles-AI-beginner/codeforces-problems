#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include<algorithm>
#include<cmath>

using namespace std;

void solve() {
    long long n;
    cin >> n;

    if (n < 4 || n % 2) {
        cout << -1 << '\n';
        return;
    }

    long long minBus = n / 6;
    long long rem = n % 6;
    if(rem == 0){

    }
    if (rem == 2) {
        minBus++;
    }

    long long maxBus = n / 4;
    rem = n % 4;

    if (rem == 2) {
        if(n<6)
        maxBus++;
    }

    cout << minBus << " " << maxBus << '\n';
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