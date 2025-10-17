#include <bits/stdc++.h>
using namespace std;

int main() {
    int questions, p, s, t, soma = 0;
    cin >> questions;

    for(int i = 0; i < questions; i++){
        cin >> p >> s >> t
        if((p == 1 && s == 1) || (p == 1 && t == 1) || (s == 1 && t == 1) || (p == 1 && s == 1 && t == 1)) {
            send++;
        }
    }
    cout << send << endl;

    return 0;
}