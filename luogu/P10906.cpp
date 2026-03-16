#include <iostream>
#include <string>

int main()
{
    const std::string s = "kfdhtshmrw4nxg#f44ehlbn33ccto#mwfn2waebry#3qd1ubwyhcyuavuajb#vyecsycuzsmwp31ipzah#catatja3kaqbcss2th";
    // std::cin >> s;

    int result = 0;
    for (auto i = 0; i < s.length(); i++)
    {
        for (auto j = 8; j < 17; j++)
        {
            if (i + j >= s.length()) break;
            bool has_number = false, has_special = false;
            for (int k = 0; k < j; k++)
            {
                if (isdigit(s[i + k])) has_number = true;
                if (!isalnum(s[i + k])) has_special = true;
            }
            if (has_number && has_special) result++;
        }
    }

    std::cout << result << std::endl;

    return 0;
}