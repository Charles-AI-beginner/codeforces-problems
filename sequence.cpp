#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        vector<int> a;
        vector<int> b;
        for(int j=0; j<n; j++){
            int x;
            cin >> x;
            b.push_back(x);
        }
        a.push_back(b[0]);
        for(int k=1; k<n; k++){
            if(b[k]>=a.back()){
                a.push_back(b[k]);
            }
            else{
                a.push_back(b[k]);
                a.push_back(b[k]);
            }
        }
        int m = a.size();
        cout << m << "\n";
        for(int i=0;i<m;i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}