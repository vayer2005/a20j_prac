#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main() {
 
  string s;
  cin >> s;
  int nUpper = 0;
  int nLower = 0;
  string p = "";
 
  for (char i : s) {
    if (i >= 'A' && i <= 'Z') {
      nUpper += 1;
    } else {
      nLower += 1;
    }
  }
 
  if (nUpper > nLower) {
    for (char i : s) {
      p += toupper(i);
    }
  } else {
    for (char i : s) {
      p += tolower(i);
    }
  }
 
  cout << p << endl;
 
}
 