#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> mochi(N);
  for (int i = 0; i < N; i ++) {
    cin >> mochi.at(i);
  }
  
  sort(mochi.begin(), mochi.end());

  int j = 0;
  int height = 1;
  while (j < N - 1) {
    if (mochi.at(j) < mochi.at(j + 1)) {
      height ++;
    }
    j ++;
  }

  cout << height << endl;
}
