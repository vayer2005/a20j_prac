#include <iostream>
 
using namespace std;
 
int main() { 
  int x, y,z;
  int n;
  int xtot = 0;
  int ytot = 0;
  int ztot = 0;
  cin >> n;
  for(int i=0; i < n; i++){
    cin >> x >> y >> z;
    xtot += x;
    ytot += y;
    ztot += z;
  }
 
  if (xtot == 0 && ytot == 0 && ztot == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }
 
  
}