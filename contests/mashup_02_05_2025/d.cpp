#include <bits/stdc++.h>
using namespace std;

float binarySearchAns(float len, float req_sum, float bound){
    float op = 0;
    float high = bound;
    float low = -bound;
    req_sum = abs(req_sum);

    while(req_sum){
        if(req_sum >= high) {
            req_sum -= high;
            op+=1;
        } else {
            high = req_sum;
            req_sum -= high;
            op+=1;             
        }
    }

    return op;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    for(int i = 0; i < t; i++){
        float len, req_sum, bound; 
        cin >> len >> req_sum >> bound;

        if(req_sum == 0){
            cout << 0 << "\n";
        } else if(req_sum == bound or req_sum == -(bound)) {
            cout << 1 << "\n";
        } else if(req_sum/bound > len or req_sum/bound < -len ) {
            cout << -1 << "\n";
        } else {
            int ans = binarySearchAns(len, req_sum, bound);
            cout << ans << "\n";
        }
    }
    
    return 0;
}