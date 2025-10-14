#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    long long sum = 0; 
    cin >> n;

    int previous_num; cin >> previous_num;
    for(int i = 1; i < n; i++){
        long long aux; cin >> aux;
        if(aux < previous_num){
            sum += previous_num - aux;
            aux = previous_num;
        }
        previous_num = aux;
    }

    cout << sum << endl;

    return 0;
}