#include <iostream>
#include <map>
#include <vector>
#include <string>
#include<algorithm>

using namespace std;

int main(){

    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n,m;
        cin >> n >> m;
        string x,s;
        cin >> x;
        cin >> s;
        int cnt = -1;
        for(int i = 0; i<6; i++){
            if(x.find(s) != string::npos){
                cnt = i;
                break;
            }
            x += x;
        }
        cout << cnt <<endl;
    }
    return 0;
}