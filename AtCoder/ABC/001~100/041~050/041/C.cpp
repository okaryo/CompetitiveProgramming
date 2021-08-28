#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  map<int, int> height;
  for (int i = 1; i <= n; i ++) {
    int tmp;
    cin >> tmp;
    height[tmp] = i;
  }

  for (auto i = height.crbegin(); i != height.crend(); i ++) {
    cout << i -> second << endl;
  }
}

int main() {
  int n;
  cin >> n;
  pair<int, int> height[n];
  for (int i = 0; i < n; i ++) {
    height[i].second = i + 1;
    cin >> height[i].first;
  }

  sort(height, height + n);
  reverse(height, height + n);
  for (int i = 0; i < n; i ++) {
    cout << height[i].second << endl;
  }
}
