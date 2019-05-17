#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) {
    cin >> a.at(i);
  }

  deque<int> b(0);
  for (int i = 0; i < n; i ++) {
    if (i % 2 == (n - 1) % 2) {
      b.push_front(a.at(i));
    } else {
      b.push_back(a.at(i));
    }
  }

  cout << b.at(0);
  for (int i = 1; i < n; i ++) {
    cout << " " << b.at(i);
  }
  cout << endl;
}
