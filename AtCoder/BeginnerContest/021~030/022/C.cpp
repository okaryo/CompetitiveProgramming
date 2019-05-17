#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int n, m;
vector<pair<int, int>> a(n);

void dijkstra() {
  priority_queue<pair<int, int>> PQ;
  
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < m; i ++) {
    int s, t, c;
    cin >> s >> t >> c;
    s --, t --;
    a[s].push_back(make_pair(t, c));
    a[t].push_back(make_pair(s, c));
  }


}