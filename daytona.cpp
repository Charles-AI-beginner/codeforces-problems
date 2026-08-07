#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        if(find(arr.begin(),arr.end(),k) != arr.end()){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }

    }
    return 0;

}