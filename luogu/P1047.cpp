#include <iostream>

int main() {
    int trees[100000];

    int l, m;
    std::cin >> l >> m;

    int u, v;
    for (int i = 0; i < m; i++) {
        std::cin >> u >> v;
        trees[u] --;
        trees[v + 1] ++;
    }

    int ans = 0;
    int flag = 0;
    for (int i = 0; i <= l; i++) {
        flag += trees[i];
        if (flag >= 0) {
            ans ++;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
