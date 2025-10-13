#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num_statements, x = 0;
    cin >> num_statements;

    while(num_statements--){
        string op; cin >> op;

        if(op == "++X" or op == "X++"){
            x++;
        } else {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}