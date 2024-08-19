#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string>
 
using namespace std;
 
 
 
void solve() {
  vector<int> flowers;
  int n;
  cin >> n;
  int currnum;
  for (int i=0; i < n; i++) {
    cin >> currnum;
    flowers.push_back(currnum);
  }
  int currmax = 0;
  for (int i=flowers.size()-1; i > -1; i--) {
    currmax = max(flowers[i], currmax+1);
  }
  cout << currmax << '\n';
 
}
 
int main() {
  int t;
  cin >> t;
 
  while (t--) {
    solve();
  }
}
