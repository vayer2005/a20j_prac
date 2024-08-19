#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main() {
  vector<vector<int>> count(3, vector<int>(3));
  vector<vector<int>> modded(3, vector<int>(3, 0));
 
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> count[i][j];
    }
  }
 
  for (int i =0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      modded[i][j] += count[i][j];
      if (i > 0) {
        modded[i-1][j] += count[i][j];
      } if (i < 2) {
        modded[i+1][j] += count[i][j];
      } if (j > 0) {
        modded[i][j-1] += count[i][j];
      } if (j < 2) {
        modded[i][j+1] += count[i][j];
      }
    }
  }
 
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (modded[i][j] % 2 == 0) {
        cout << 1;
      } else {
        cout << 0;
      }
    }
    cout << endl;
  }
 
}
 
  