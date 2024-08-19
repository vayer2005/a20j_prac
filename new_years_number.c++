#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main() { 
  long long t;
  cin >> t;
 
  while (t--) {
    long long num;
    cin >> num;
    while ((num >= 2020) && (num %2020) != 0) {
      num = num - 2021;
    }
    
    if ((num == 0) || (num % 2020 == 0)) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
   
  }
}