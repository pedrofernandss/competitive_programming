#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int size_arr1, size_arr2;
    vector<int> arr1, arr2, ans;
    scanf("%d %d", &size_arr1, &size_arr2);

    for(int i = 0; i < size_arr1; i++){
        int aux;
        scanf("%d ", &aux);
        arr1.push_back(aux);
    }

    for(int i = 0; i < size_arr2; i++){
        int aux;
        scanf("%d ", &aux);
        arr2.push_back(aux);
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    i = 0
    for (int j = 0; j < arr2.size();j++):
        while i < a.size() && a[i] < b[j]:
           i++
        ans[j] = i

    for(int i = 0; i < ans.size(); i++){
        printf("%d ", ans[i]);
    }

    return 0;
}
