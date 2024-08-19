#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
  int n;
  string s;
  cin >> n >> s;
  map<char, int> umap;
  for (int i = 0; i < n*4; i++) {
    umap[s[i]] += 1;
  }
 
  int ncorrect = 0;
  for (auto &it : umap) {
   if(it.first != '?') {
     if (it.second < n) {
       ncorrect += it.second;
     } else {
       ncorrect += n;
     }
   }
  }
 
  cout << ncorrect << endl;
 
}
int main() { 
  int t;
  cin >> t;
 
  while (t--) {
    solve();
  }
}