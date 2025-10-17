#include <bits/stdc++.h>
using namespace std;

void paraMinusculas(string& str){
    for(char& c : str){
        if(c >= 'A' && c <= 'Z'){
            c += 32;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str1, str2;
    cin >> str1 >> str2;

    paraMinusculas(str1);
    paraMinusculas(str2);
    
    if (str1 < str2){
        cout << -1 << endl;
    } else if(str1 > str2){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}