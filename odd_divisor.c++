#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
  long long n;
  cin >> n;
  if (n % 2 == 0) {
    long long curr = n;
    while ((curr > 1) && (curr % 2 == 0)) {
      curr = curr / 2;
  
    }
    if (curr == 1) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  } else {
    cout << "YES" << endl;
  }
 
}
int main() { 
  int t;
  cin >> t;
 
  while (t--) {
    solve();
  }
}