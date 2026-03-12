#include <iostream>

int main()
{
    char s, t;
    long long ts, last_ts = 0;
    int current_combo = 0, result = 0;
    while (std::cin >> s >> t >> ts)
    {
        if (s == t && ts - last_ts <= 1000) current_combo++;
        else
        {
            if (current_combo + 1 > result) result = current_combo + 1;
            current_combo = 0;
        }
        last_ts = ts;
    }
    std::cout << std::max(current_combo, result) << std::endl;

    return 0;
}