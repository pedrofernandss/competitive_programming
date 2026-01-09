#include <bits/stdc++.h>
using namespace std;

vector<int> createSufixPrefixTable(string pattern){
  int patternSize = pattern.size();
  int j = 0, i = 1;
  vector<int> sufixPrefixTable(patternSize, 0);
  
  while(i < patternSize){
    if(pattern[i] == pattern[j]){
      j++;
      sufixPrefixTable[i] = j;
      i++;
    } else {
        if(j != 0){
          j = sufixPrefixTable[j-1];
        } else {
          sufixPrefixTable[i] = 0;
          i++;
        }
    }
  }
  return sufixPrefixTable;  
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    string str, pattern;
    cin >> str >> pattern;
    
    int strSize = str.size();
    int patternSize = pattern.size();
    int i = 0, j = 0, ans = 0;
    vector<int> sufixPrefixTable = createSufixPrefixTable(pattern);
    
    while(i < strSize){
      if(pattern[j] == str[i]){
        i++;
        j++;
      }
      
      if(j == patternSize){
        ans++;
        j = sufixPrefixTable[j-1];
      } else {
        if(i < strSize and pattern[j] != str[i]){
          if(j != 0){
            j = sufixPrefixTable[j-1];
          } else {
            i++;
          }
      } 
    }
  }
  cout << ans << endl;
  return 0;
}
