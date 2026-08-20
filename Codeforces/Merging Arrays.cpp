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

    int p1 = 0, p2 = 0;

    while(p1 < arr1.size() and p2 < arr2.size()){
        if(arr1[p1] <= arr2[p2]){
            ans.push_back(arr1[p1]);
            p1++;
        } else {
                ans.push_back(arr2[p2]);
                p2++;
            }
        }

    while(p1 < arr1.size()){
        ans.push_back(arr1[p1]);
        p1++;
    }

    while(p2 < arr2.size()){
        ans.push_back(arr2[p2]);
        p2++;
    }

    for(int i = 0; i < ans.size(); i++){
        printf("%d ", ans[i]);
    }

    return 0;
}

