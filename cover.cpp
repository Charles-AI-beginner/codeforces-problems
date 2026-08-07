#include <iostream>
#include <vector>
#include <string>
#include<algorithm>

using namespace std;

int main(){

    int t;
    cin >> t;
    int n;
    string s;
    for(int i = 0; i<t; i++){
        cin >> n;
        cin >> s;
        int cnt = 0;
        int filled = 0;
        for(char c : s){
            if(c == '.'){
                cnt+=1;
                if(cnt == 3){
                    cnt = 1;
                    filled = 2;
                    break;
                }
                else{
                    filled += 1;
                }
            }
            else{
                cnt = 0;
            }
        }
        cout << filled << endl;

    }
}