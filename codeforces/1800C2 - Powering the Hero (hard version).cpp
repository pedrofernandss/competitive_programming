#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long test_cases;
    cin >> test_cases;

    for(long long i = 0; i < test_cases; i++){
        priority_queue<long long> bonus_deck;
        long long army_power = 0;

        long long num_cards; cin >> num_cards;

        for(long long j = 0; j < num_cards; j++){
            long long aux; cin >> aux;

            if(aux > 0){
                bonus_deck.push(aux);
            } else {
                if(!bonus_deck.empty()){
                    army_power += bonus_deck.top();
                    bonus_deck.pop();
                }
            }
        }
        cout << army_power << endl;
    }

    return 0;
}