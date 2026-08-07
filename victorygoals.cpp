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
        int score = 0;
        for(int i = 0; i<n-1; i++){
            int x;
            cin >> x;
            score +=x; 
        }
        score = -score;
        cout << score << endl;
    }
    
    return 0;
}