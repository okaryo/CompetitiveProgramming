#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, c, k;
  cin >> n >> c >> k;
  vector<int> time(n);
  for (int i = 0; i < n; i ++) {
    cin >> time.at(i);
  }
  sort(time.begin(), time.end());

  int cnt = 1, waitingman = 1, firstman = time.at(0);
  for (int i = 1; i < n; i ++) {
    if (waitingman == c || firstman + k < time.at(i)) {
      firstman = time.at(i);
      waitingman = 1;
      cnt ++;
    } else {
      waitingman ++;
    }
  }

  cout << cnt << endl;
}
