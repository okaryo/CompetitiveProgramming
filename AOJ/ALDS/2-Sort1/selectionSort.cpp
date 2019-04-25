#include <bits/stdc++.h>
using namespace std;

int selectionSort(int a[], int n) {
  int cnt = 0;
  for (int i = 0; i < n-1; i ++) {
    int minj = i;
    for (int j = i+1; j < n; j ++) {
      if (a[j] < a[minj]) {
        minj = j;
      }
    }
    swap(a[i], a[minj]);
    if (i != minj) cnt ++;
  }
  return cnt;
}

int main() {
  int n, a[100];
  cin >> n;
  for (int i = 0; i < n; i ++) cin >> a[i];

  int cnt = selectionSort(a, n);

  for (int i = 0; i < n; i ++) {
    if (i) cout << " ";
    cout << a[i];
  }
  cout << endl;
  cout << cnt << endl;
}
