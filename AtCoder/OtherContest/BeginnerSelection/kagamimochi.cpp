#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> mochi(n);
  for (int i = 0; i < n; i ++) {
    cin >> mochi.at(i);
  }
  sort(mochi.begin(), mochi.end());

  int count = 1;
  for (int i = 1; i < n; i ++) {
    if (mochi.at(i - 1) != mochi.at(i)) {
      count ++;
    }
  }

  cout << count << endl;
}
