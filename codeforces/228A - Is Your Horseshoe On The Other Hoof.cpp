#include <bits/stdc++.h>
using namespace std;

int main() {
    int d1, d2, d3, d4;
    set<int> conj;

    cin >> d1 >> d2 >> d3 >> d4;
    
    conj.insert(d1);
    conj.insert(d2);
    conj.insert(d3);
    conj.insert(d4);

    int ans = 4 - conj.size();
    cout << ans << endl;

    return 0;
}