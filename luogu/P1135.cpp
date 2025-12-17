#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  vector<int> k(n + 1);
  for (int i = 1; i <= n; ++i) {
    cin >> k[i];
  }

  vector<int> dist(n + 1, -1);
  queue<int> q;

  q.push(a);
  dist[a] = 0;

  while (!q.empty()) {
    int cur = q.front();
    q.pop();

    if (cur == b) {
      cout << dist[cur] << endl;
      return 0;
    }

    int up = cur + k[cur];
    if (up <= n && dist[up] == -1) {
      dist[up] = dist[cur] + 1;
      q.push(up);
    }

    int down = cur - k[cur];
    if (down >= 1 && dist[down] == -1) {
      dist[down] = dist[cur] + 1;
      q.push(down);
    }
  }

  cout << -1 << endl;
  return 0;
}
