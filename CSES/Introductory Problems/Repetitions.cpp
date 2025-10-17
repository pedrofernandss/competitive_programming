#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 1, count = 1;
    string str;
    cin >> str;

    for(int i = 1; i < str.length(); i++){
        if(str[i] == str[i-1]){
            count += 1;
        } else {
            count = 1;
        }
        ans = max(ans, count);
    }

    cout << ans << endl;

    return 0;
}