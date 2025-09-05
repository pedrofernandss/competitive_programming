#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        int val; cin >> val;
        arr[i] = val;
    }
	
	int num_op = 0;
	for(int i = 1; i <= n; i++){
		if lista[i] < lista[i-1]:
			inc = arr[i- 1] - arr[i];
			num_op++;
			lista[i] += inc;
	}
	
	cout << num_op << endl;
 
    return 0;
}