#include <bits/stdc++.h>
using namespace std;

int bubbleSort(int a[], int n) {
  int cnt = 0;
  bool flag = true;
  for (int i = 0; flag; i ++) {
    flag = false;
    for (int j = n - 1; j >= i + 1; j --) {
      if (a[j] < a[j - 1]) {
        swap(a[j], a[j-1]);
        flag = true;
        cnt ++;
      }
    }
  }
  return cnt;
}

int main() {
  int n, a[100];
  cin >> n;
  for (int i = 0; i < n; i ++) cin >> a[i];

  int cnt = bubbleSort(a, n);

  for (int i = 0; i < n; i ++) {
    if (i) cout << " ";
    cout << a[i];
  }
  cout << endl;
  cout << cnt << endl;
}
