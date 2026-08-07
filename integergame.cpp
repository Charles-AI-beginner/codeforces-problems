#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;
    int n;
    for(int i = 0; i<t; i++){
        cin >> n;
        if((n+1)%3 == 0 || (n-1)%3 == 0){
            cout << "First" << endl;
        }
        else{
            cout << "Second" << endl;
        }
    }
}