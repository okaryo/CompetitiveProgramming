#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()

int main() {
}

/* ----------------------------------------- */
cout << setprecision(15) << ans << endl;

// 最大公約数
int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

// 昇順の優先度付きキュー
priority_queue<int, vector<int>, greater<int>> pq;

// 繰り返し二乗法
LL RS(LL n, LL p, LL mod) {
  if (p == 0) return 1;
  else if (p % 2 == 0) {
    LL t = RS(n, p / 2, mod);
    return t * t % mod;
  } else {
    return n * RS(n, p - 1, mod) % mod;
  }
}

// にぶたん
int binarySearch (vector<int> a, int n, int key) {
  int left = 0;
  int right = n;
  int mid;
  while (left < right) {
    mid = (left + right) / 2;
    if (key == a.at(mid)) return 1;
    if (key > a.at(mid)) left = mid + 1;
    else if (key < a.at(mid)) right = mid;
  }
  return 0;
}

// Union-Find
int find_root(int x) {
  if (p[x] != x) p[x] = find_root(p[x]);
  return p[x];
}

void unite(int x, int y) {
  int nx = find_root(x);
  int ny = find_root(y);
  if (nx == ny) return;
  else {
    if (nx > ny) p[nx] = ny;
    else p[ny] = nx;
  }
}

struct DisjointSet {
  public:
    vector<int> rank, p;

    DisjointSet() {}
    DisjointSet(int size) {
      rank.resize(size, 0);
      p.resize(size, 0);
      for (int i = 0; i < size; i ++) makeSet(i);
    }

    void makeSet(int x) {
      p[x] = x;
      rank[x] = 0;
    }
    
    bool same(int x, int y) {
      return findSet(x) == findSet(y);
    }

    void unite(int x, int y) {
      link(findSet(x), findSet(y));
    }

    void link(int x, int y) {
      if (rank[x] > rank[y]) {
        p[y] = x;
      } else {
        p[x] = y;
        if (rank[x] == rank[y]) {
          rank[y] ++;
        }
      }
    }

    int findSet(int x) {
      if (x != p[x]) {
        p[x] = findSet(p[x]);
      }
      return p[x];
    }
};

//  ワーシャルフロイド法
void warshall_floyd(int n) {
  for (int k = 0; k < n; k++){       // 経由する頂点
    for (int i = 0; i < n; i++) {    // 始点
      for (int j = 0; j < n; j++) {  // 終点
        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
      }
    }
  }
}