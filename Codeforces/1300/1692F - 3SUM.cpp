#include <bits/stdc++.h>
using namespace std;

void solve() {
    int inputSize; cin >> inputSize;

    vector<int> princArr;
    vector<int> auxArr(10, 0);

    for(int i = 0; i < inputSize; i++){ // Adiciona quantas ocorrências de cada número que terminam entre 0 e 9
        int aux;
        cin >> aux;
        auxArr[aux%10]++;
    }

    for(int i = 0; i < 10; i++){
        for (int j = 0; j < min(auxArr[i], 3); j++){
            princArr.push_back(i);
        }
    }

    int arrSize = princArr.size();
    for(int i = 0; i < arrSize; i++){
        for(int j = i+1; j < arrSize; j++){
            for(int k = j+1; k < arrSize; k++){
                if((princArr[i]+princArr[j]+princArr[k])%10 == 3){
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
    
}


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int test_cases; cin >> test_cases;

    while(test_cases--){
        solve();
    }

    return 0;
}