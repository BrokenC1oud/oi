#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> v(n);
  int amazing = 0;
  for (int i = 0; i < n; i++) {
    int t;
    std::cin >> t;
    v[i] = t;
    if (i == 0)
      continue;
    int max = 0;
    int min = 10000;
    for (int j = 0; j < i; j++) {
      max = max > v[j] ? max : v[j];
      min = min < v[j] ? min : v[j];
    }
    if (t > max || t < min)
      amazing++;
  }
  std::cout << amazing << std::endl;
  return 0;
}
