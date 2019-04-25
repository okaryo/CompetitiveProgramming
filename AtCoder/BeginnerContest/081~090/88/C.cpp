#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> c(3, vector<int> (3));
  for (int i = 0; i < 3; i ++) {
    for (int j = 0; j < 3; j ++) {
      cin >> c[i][j];
    }
  }

  int a1 = 0;
  int b1 = c[0][0];
  int b2 = c[0][1];
  int b3 = c[0][2];
  int a2 = c[1][0] - b1;
  int a3 = c[2][0] - b1;
  vector<int> A = {a1, a2, a3};
  vector<int> B = {b1, b2, b3};
  string ans = "Yes";
  for (int i = 0; i < 3; i ++) {
    for (int j = 0; j < 3; j ++) {
      if (c[i][j] != A[i] + B[j]) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << ans << endl;
}
