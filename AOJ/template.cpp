#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
}

/* ----------------------------------------- */

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

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

class DisjointSet {
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