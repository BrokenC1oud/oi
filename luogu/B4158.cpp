#include <functional>
#include <iostream>
#include <string>

bool is_prime(long long n)
{
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void solve()
{
    std::string s;
    std::cin >> s;
    bool found = false;
    long long result = -1;

    std::function<void(std::string&, int)> dfs = [&](std::string& s, int idx)
    {
        if (found) return;

        if (idx == s.length())
        {
            long long val = std::stoll(s);
            if (is_prime(val))
            {
                result = val;
                found = true;
            }
            return;
        }

        if (s[idx] != '*')
        {
            dfs(s, idx + 1);
        } else
        {
            for (int i = 0; i <= 9; i++)
            {
                s[idx] = i + '0';
                dfs(s, idx + 1);
                if (found) return;
            }
            s[idx] = '*';
        }
    };

    dfs(s, 0);

    std::cout << result << std::endl;
}

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
