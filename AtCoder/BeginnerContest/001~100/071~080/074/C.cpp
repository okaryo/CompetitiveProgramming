#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D, E, F;
  cin >> A >> B >> C >> D >> E >> F;

  double v = (double)E / (100 + E);
  double maxd = 0;
  int swater = 0, sugar = 0;
  for (int i = 0; 100*A*i <= F; i ++) {
    for (int j = 0; 100*A*i + 100*B*j <= F; j ++) {
      for (int k = 0; 100*A*i + 100*B*j + C*k <= F; k ++) {
        for (int l = 0; 100*A*i + 100*B*j + C*k + D*l <= F; l ++) {
          double dense = (double)(C*k + D*l) / (100*A*i + 100*B*j + C*k + D*l);
          if (v < dense) continue;

          if (maxd <= dense) {
            maxd = dense;
            swater = 100*A*i + 100*B*j + C*k + D*l;
            sugar = C*k + D*l;
          }
        }
      }
    }
  }

  cout << swater << " " << sugar << endl;
}
