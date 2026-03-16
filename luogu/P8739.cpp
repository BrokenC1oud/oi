#include <iostream>
#include <string>
#include <vector>

int main()
{
    int K;
    std::string S;
    std::cin >> K >> S;

    int n = S.length();

    if (n % K != 0)
    {
        std::cout << -1 << std::endl;
        return 0;
    }

    int m = n / K;
    int total_modifications = 0;
    for (int i = 0; i < m; i++)
    {
        std::vector<int> counts(26, 0);
        int max_freq = 0;

        for (int j = 0; j < K; j++)
        {
            int char_idx = S[i + j * m] - 'a';
            counts[char_idx]++;
            max_freq = std::max(max_freq, counts[char_idx]);
        }

        total_modifications += (K - max_freq);
    }

    std::cout << total_modifications << std::endl;

    return 0;
}