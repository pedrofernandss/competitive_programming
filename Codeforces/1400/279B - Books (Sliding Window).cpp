#include <bits/stdc++.h>
using namespace std;

int main() {
    int numBooks, freeTime;
    vector <int> booksList;

    scanf("%d %d", &numBooks, &freeTime);

    for(int i = 0; i < numBooks; i++){
        int ans;
        scanf("%d ", &ans);
        booksList.push_back(ans);
    }

    int low = 0, totalHours = 0, maxBooksRead = 0;

    for(int fast = 0; fast < booksList.size(); fast++){
        totalHours += booksList[fast];

        while(totalHours > freeTime){
            totalHours -= booksList[low];
            low++;
        }

        maxBooksRead = max(maxBooksRead, (fast-low+1));
    }


    printf("%d\n", maxBooksRead);

    return 0;
}