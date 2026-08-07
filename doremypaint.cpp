#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
#include<map>

using namespace std;

int main(){

    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n;
        cin >> n;
        vector<int> a(n);
        map<int,int> hash;
        for(int j = 0; j<n; j++){
            cin >> a[j];
            hash[a[j]]++;
        }
        int size = hash.size();
        vector<int> b;
        for(auto it: hash){
            b.push_back(it.first);
        }
        if(size < 2){
            cout << "Yes" << endl;
        }
        else if(size == 2){
            if(abs(hash[b[0]]-hash[b[1]]) <= 1){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else{
            cout << "No" << endl;
        }

    }

}