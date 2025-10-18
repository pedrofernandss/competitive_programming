#include <bits/stdc++.h>
using namespace std;

int find_balanced_team(vector<int> v){
    int left = 0, right = 0, max_team = 1;

    while(right < v.size()){
        if(v[right] - v[left] <= 5){
            max_team = max(max_team, (right-left)+1);
            right++;
        } else {
            left++; 
        }
    }
    return max_team;
}


int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int num_students;
    bool balanced_team;
    cin >> num_students;

    vector<int> students(num_students);
    int left = 0, right = students.size()-1;
    for(int i = 0; i < num_students; i++){
        cin >> students[i];
    } 

    sort(students.begin(), students.end());

    int total_students = find_balanced_team(students);

    cout << total_students << endl;

    return 0;
}