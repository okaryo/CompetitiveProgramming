#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  map<int, int> firstIsland;
  map<int, int> secondIsland;
  for (int i = 0; i < m; i ++) {
    int a, b;
    cin >> a >> b;
    if (a == 1) {
      firstIsland[b] = 1;
    } else if (b == n) {
      secondIsland[a] = 1;
    }
  }

  for (auto fi = firstIsland.begin(); fi != firstIsland.end(); fi ++) {
    if (secondIsland[fi -> first]) {
      cout << "POSSIBLE" << endl;
      return 0;
    }
  }

  cout << "IMPOSSIBLE" << endl;
}
