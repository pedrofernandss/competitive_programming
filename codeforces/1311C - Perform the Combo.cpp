#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cases;
    cin >> cases;

    for(int i = 0; i < cases; i++){
        int length, num_tries;
        cin >> length >> num_tries;

        string str;
        cin >> str;

        vector<int> prefixArr(num_tries);
        for(int i = 0; i < num_tries; i++){
            cin >> prefixArr[i];
        }

        vector<long long> pressCount(length+2, 0);
        for(int i = 0; i < num_tries; i++){
            pressCount[1] += 1;
            pressCount[prefixArr[i] + 1] -= 1;
        }

        pressCount[1] += 1;
        pressCount[length+1] -= 1;

        for(int i = 1; i <= length; i++){
            pressCount[i] += pressCount[i - 1];
        }

        vector<long long> ans(26, 0);
        for(int i = 0; i < length; i++){
            ans[str[i] - 'a'] += pressCount[i+1];
        }

        for(int i = 0; i < 26; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    } 

    return 0;
}