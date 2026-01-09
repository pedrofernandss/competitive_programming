#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    string str, pattern;
    bool found = true;
    int ans = 0, count = 0;
    
    cin >> str >> pattern;
    long long patternSize = pattern.size();
    long long strSize = str.size();
    
    if(patternSize > strSize){
      cout << 0 << endl;
      return 0;
    }
       
    for(long long i = 0; i < (str.size() - pattern.size() + 1); i++){
      found = true;
      for(long long j = 0; j < pattern.size(); j++){
        if(str[i+j] != pattern[j]){
          found = false;
          break;
        }
      }
      if(found){
          ans++;
      }
    }
    
    cout << ans << endl;
    
    return 0;
}
