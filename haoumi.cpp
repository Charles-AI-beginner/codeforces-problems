#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
    long long t;
    cin >> t;
    long long k,n;
    for(int i = 0; i<t; i++){
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(k>1){
            cout << "YES";
        }
        else if(is_sorted(a.begin(),a.end()) == true){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
}