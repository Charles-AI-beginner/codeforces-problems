#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int minn = INT_MAX;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        minn = min(minn,abs(x));
    }
    cout << minn << endl;
    return 0;

}