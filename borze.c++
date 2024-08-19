#include <iostream>
#include <string>
 
using namespace std;
 
int main() { 
  
  string s;
  cin >> s;
  string ans="";
 
  int i = 0;
  while (i < s.size()) {
    char toAdd;
    string one = "-.";
    if (s[i] == '.') {
      toAdd = '0';
      i+=1;
    } else {
      string curr = s.substr(i,2);
      if (curr.compare(one) == 0) {
        toAdd = '1';
        i+=2;
      } else {
        toAdd = '2';
        i+=2;
      }
    }
    ans += toAdd;
  }
 
  cout << ans << endl;
 
}