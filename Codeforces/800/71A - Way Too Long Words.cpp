#include <bits/stdc++.h>
using namespace std;

int main() {
    int tests;
    cin >> tests;
    
    for(int q; q < tests; q++){
        
        string word;
        cin >> word;
        
        int sz = word.size();
        if(sz > 10){
            char first = word[0];
            char last = word[sz -1];
            sz = sz - 2;
            cout << first << sz << last << endl;
        } else {
            cout << word << endl;
        }
    }
    return 0;
}