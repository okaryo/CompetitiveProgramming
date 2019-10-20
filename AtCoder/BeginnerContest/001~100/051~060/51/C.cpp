#include <bits/stdc++.h>
using namespace std;

int main() {
  int sx, sy, tx, ty;
  cin >> sx >> sy >> tx >> ty;

  int X, Y;
  X = tx - sx, Y = ty - sy;

  for (int i = 0; i < X; i ++) cout << 'R';
  for (int i = 0; i < Y; i ++) cout << 'U';
  for (int i = 0; i < X; i ++) cout << 'L';
  for (int i = 0; i < Y; i ++) cout << 'D';
  cout << 'D';
  for (int i = 0; i < X+1; i ++) cout << 'R';
  for (int i = 0; i < Y+1; i ++) cout << 'U';
  cout << 'L';
  cout << 'U';
  for (int i = 0; i < X+1; i ++) cout << 'L';
  for (int i = 0; i < Y+1; i ++) cout << 'D';
  cout << 'R';

  cout << endl;
}
