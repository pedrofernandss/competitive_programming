#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k; 
    cin >> n >> k;

    vector<int> arr(n);
    int sum = 0;
    int sumMin = INT_MAX;
    int ansIndex = 0;
    int initialIndex = 0;

    for(int currentIndex = 0; currentIndex < n; currentIndex++){
        int val;
        cin >> val;

        arr[currentIndex] = val;
        sum += arr[currentIndex];
        
        if(currentIndex - initialIndex+1 == k){
            if(sum < sumMin){
                ansIndex = initialIndex;
                sumMin = sum;
            }
            sum -= arr[initialIndex];
            initialIndex += 1;
        }
    }

    cout << (ansIndex+1) << "\n";

    return 0;
}