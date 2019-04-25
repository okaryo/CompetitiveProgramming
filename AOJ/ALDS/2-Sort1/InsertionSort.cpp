#include <bits/stdc++.h>
using namespace std;

void trace(vector<int> a, int n) {
  for (int i = 0; i < n; i ++) {
    if (i > 0) cout << " ";
    cout << a.at(i);
  }
  cout << endl;
}

void insertionSort(vector<int> a, int n) {
  for (int i = 1; i < n; i ++) {
    int v = a.at(i);
    int j = i - 1;
    while (j >= 0 && a.at(j) > v) {
      a.at(j + 1) = a.at(j);
      j --;
    }
    a.at(j + 1) = v;
    trace(a, n);
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i ++) cin >> a.at(i);

  trace(a, n);
  insertionSort(a, n);
}
