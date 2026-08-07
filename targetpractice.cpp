#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(){

    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        vector<string> target;
        for(int j=1; j<=10; j++){
            string str;
            cin >> str;
            target.push_back(str);
        }
        int points = 0;
        for(int j=1; j<=10; j++){
            for(int k=1; k<=10; k++){
                int row = k>5?(11-k):k;
                int col = j>5?(11-j):j;
                if(target[j-1][k-1] == 'X'){
                    points += min(row,col);
                }
            }
        }
        cout << points << endl;

    }

    return 0;
}