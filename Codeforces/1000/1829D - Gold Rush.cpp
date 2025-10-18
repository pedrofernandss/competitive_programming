#include <bits/stdc++.h>
using namespace std;

bool can_be_splited(int n, int m){
    if(n == m){
        return true;
    };
    if(n%3 != 0) {
        return false;
    } else {
        int left_side = n/3;
        int right_side = 2*n/3;
        
        return can_be_splited(left_side, m) || can_be_splited(right_side, m);
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int test_cases;
    cin >> test_cases;

    for(int i = 0; i < test_cases; i++){
        int start_size, target_size;
        cin >> start_size >> target_size;

        if(can_be_splited(start_size, target_size)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}