#include <bits/stdc++.h>
using namespace std;

int main() {
    string name;
    set<char> diff;

    cin >> name;

    for(int x = 0; x < name.size(); x++){
        diff.insert(name[x]);
    }

    if(diff.size()%2 != 0) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}