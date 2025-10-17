#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long ans = 1e18;

    for(int mask = 0; mask <(1<<n); mask++){
        long long sumA = 0;
        long long sumB = 0;
        for(int position = 0; position < n; position++){
            if(mask&(1<<position)){
                sumA += arr[position];
            } else {
                sumB += arr[position];
            }
        }
        ans = min(ans, abs(sumA-sumB));
    }

    cout << ans << endl;

    return 0;
}