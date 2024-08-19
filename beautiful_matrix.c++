#include <iostream>
 
using namespace std;
 
int main() { 
  int curr;
  int col;
  int row;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> curr;
      if (curr == 1) {
        col = i + 1;
        row = j + 1;
      } 
    }
  }
 
  cout << abs(col-3) + abs(row-3) << endl;
  
}