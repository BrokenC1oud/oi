#include <algorithm>
#include <format>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string word;
  std::vector<int> nums;
  while (std::getline(std::cin, word, ' ')) {
    if (word.back() == '\n')
      word.pop_back();
    if (word.back() == '.')
      word.pop_back();
    if (word == "one")
      nums.push_back(1);
    if (word == "two")
      nums.push_back(2);
    if (word == "three")
      nums.push_back(3);
    if (word == "four")
      nums.push_back(4);
    if (word == "five")
      nums.push_back(5);
    if (word == "six")
      nums.push_back(6);
    if (word == "seven")
      nums.push_back(7);
    if (word == "eight")
      nums.push_back(8);
    if (word == "nine")
      nums.push_back(9);
    if (word == "ten")
      nums.push_back(10);
    if (word == "eleven")
      nums.push_back(11);
    if (word == "twelve")
      nums.push_back(12);
    if (word == "thirteen")
      nums.push_back(13);
    if (word == "fourteen")
      nums.push_back(14);
    if (word == "fifteen")
      nums.push_back(15);
    if (word == "sixteen")
      nums.push_back(16);
    if (word == "seventeen")
      nums.push_back(17);
    if (word == "eighteen")
      nums.push_back(18);
    if (word == "nineteen")
      nums.push_back(19);
    if (word == "twenty")
      nums.push_back(20);
    if (word == "a")
      nums.push_back(1);
    if (word == "both")
      nums.push_back(2);
    if (word == "another")
      nums.push_back(1);
    if (word == "first")
      nums.push_back(1);
    if (word == "second")
      nums.push_back(2);
    if (word == "third")
      nums.push_back(3);
  }

  std::sort(nums.begin(), nums.end());

  for (int &num : nums) {
    num *= num;
    num %= 100;
  }

  std::string res;
  for (int i : nums) {
    res += std::format("{:02d}", i);
  }

  int i;
  for (i = 0; res[i] == '0'; i++)
    ;
  res = res.substr(i);
  if (res.length() == 0) {
    res = "0";
  }
  std::cout << res << std::endl;

  return 0;
}
