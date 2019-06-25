#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int a[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
  int y, m, d;
  scanf("%d/%d/%d", &y, &m, &d);

  if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) a[2] ++;

  int j;
  for (int i = m; i <= 12; i ++) {
    for (j = d; j <= a[i]; j ++) {
      if (y % i == 0 && (y / i) % j == 0) {
        printf("%04d/%02d/%02d\n", y, i, j);
        return 0;
      }
    }
    j = 1;
  }

  cout << y + 1 << "/01/01" << endl;
}
