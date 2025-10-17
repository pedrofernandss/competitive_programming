#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    vector<long long> array_faltante;
    cin >> n;

    long long soma_total = n * (n+1)/2;
    long long soma_array_faltante = 0;

    for(long long i = 0; i < n-1; i++){
        long long aux;
        cin >> aux;
        soma_array_faltante += aux;
    }

    long long numero_faltante = soma_total - soma_array_faltante;

    cout << numero_faltante << endl;

    return 0;
}