#include <iostream>

bool evaluate(const std::string& expr)
{
    std::string cleaned;
    for (const char c : expr)
    {
        if (c != ' ') cleaned += c;
    }

    int sum = 0;
    int currentNum = 0;
    char lastOp = '+';

    for (size_t i = 0; i < cleaned.length(); i++)
    {
        if (isdigit(cleaned[i]))
        {
            currentNum = currentNum * 10 + (cleaned[i] - '0');
        }

        if (!isdigit(cleaned[i]) || i == cleaned.length() - 1)
        {
            if (lastOp == '+') sum += currentNum;
            else if (lastOp == '-') sum -= currentNum;

            lastOp = cleaned[i];
            currentNum = 0;
        }
    }
    return sum == 0;
}

void solve(int current, int n, std::string path)
{
    if (current == n)
    {
        if (evaluate(path))
        {
            std::cout << path << std::endl;
        }
        return;
    }

    int next = current + 1;
    std::string next_val = std::to_string(next);

    solve(next, n, path + ' ' + next_val);
    solve(next, n, path + '+' + next_val);
    solve(next, n, path + '-' + next_val);
}

int main()
{
    int n;
    std::cin >> n;

    solve(1, n, "1");

    return 0;
}