#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, N; cin >> n;
  N = n % 30;

  int tmp, j;
  vector<int> a = {1, 2, 3, 4, 5, 6};
  for (int i = 0; i < N; i ++) {
    j = i % 5;
    tmp = a[j];
    a[j] = a[j+1];
    a[j+1] = tmp;
  }

  for (int i = 0; i < 6; i ++) {
    cout << a[i];
  }
  cout << endl;
}
