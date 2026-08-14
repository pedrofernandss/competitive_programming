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

    int low = 0, fast = 0, totalHours = 0, maxTotalBooksRead = 0, totalBooksRead = 0;

    while(low < booksList.size()){
        fast = low;
        totalHours = 0;
        totalBooksRead = 0;

        while(fast < booksList.size()){
            if(booksList[fast] <= (freeTime - totalHours)){
                totalBooksRead++;
                totalHours = totalHours + booksList[fast];
                fast++;
            } else {
                break;
            }

        }

        if (totalBooksRead > maxTotalBooksRead){
            maxTotalBooksRead = totalBooksRead;
        }

        low++;
    }

    printf("%d\n", maxTotalBooksRead);

    return 0;
}