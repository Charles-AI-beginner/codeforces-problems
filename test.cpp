#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

void solve(){
    
    long long a, b, x;
    cin >> a >> b >> x;

    long long min_ops = abs(a - b);

    long long temp_a = a;
    long long div_a_count = 0;

    while (true) {
        long long temp_b = b;
        long long div_b_count = 0;

        while (true) {
            long long current_ops = div_a_count + div_b_count + abs(temp_a - temp_b);
            min_ops = min(min_ops, current_ops);

            if (temp_b == 0) break;
            temp_b /= x;
            div_b_count++;
        }

        if (temp_a == 0) break;
        temp_a /= x;
        div_a_count++;
    }
    cout << min_ops << "\n";
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