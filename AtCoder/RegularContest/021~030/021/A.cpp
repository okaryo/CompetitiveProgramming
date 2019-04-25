#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int> > vec(4, vector<int> (4));
  for (int i = 0; i < 4; i ++) {
    for (int j = 0; j < 4; j ++) {
      cin >> vec.at(i).at(j);
    }
  }

  for (int i = 0; i < 4; i ++) {
    for (int j = 1; j < 4; j ++) {
      if (vec.at(i).at(j) == vec.at(i).at(j-1)) {
        cout << "CONTINUE" << endl;
        return 0;
      }
    }
  }
  for (int i = 1; i < 4; i ++) {
    for (int j = 0; j < 4; j ++) {
      if (vec.at(i).at(j) == vec.at(i-1).at(j)) {
        cout << "CONTINUE" << endl;
        return 0;
      }
    }
  }

  cout << "GAMEOVER" << endl;
}
