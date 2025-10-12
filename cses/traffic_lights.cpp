#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int street_len, traffic_lights;
    cin >> street_len >> traffic_lights;

    set<int> light_positions{0, street_len};
    multiset<int> distances{street_len};

    for(int i = 0; i < traffic_lights; i++){
        int addedValue;
        cin >> addedValue;

        light_positions.insert(addedValue);

        auto iter = light_positions.find(addedValue);

        int previousValue = *prev(iter);
        int nextValue = *next(iter);

        distances.erase(distances.find(nextValue - previousValue));
        distances.insert(addedValue - previousValue);
        distances.insert(nextValue - addedValue);

        cout << *distances.rbegin() << endl; 
    }

    return 0;
}

// [0, 1, 2, 3, 4, 5, 6, 7, 8] -> street_lenght
// [0, 1, 2, LIGHT, 4, 5, 6, 7, 8] -> 1° Addition -> Ans = 5
// [0, 1, 2, LIGHT, 4, 5, LIGHT, 7, 8] -> 2° Addition -> Ans = 3
// [0, 1,  LIGHT, LIGHT, 4, 5, LIGHT, 7, 8] -> 3° Addition -> Ans = 3
// 