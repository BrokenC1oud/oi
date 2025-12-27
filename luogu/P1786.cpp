#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int getRank(string s) {
  if (s == "BangZhu")
    return 0;
  if (s == "FuBangZhu")
    return 1;
  if (s == "HuFa")
    return 2;
  if (s == "ZhangLao")
    return 3;
  if (s == "TangZhu")
    return 4;
  if (s == "JingYing")
    return 5;
  if (s == "BangZhong")
    return 6;
  return 7;
}

string rankToStr(int r) {
  if (r == 0)
    return "BangZhu";
  if (r == 1)
    return "FuBangZhu";
  if (r == 2)
    return "HuFa";
  if (r == 3)
    return "ZhangLao";
  if (r == 4)
    return "TangZhu";
  if (r == 5)
    return "JingYing";
  return "BangZhong";
}

struct Member {
  string name;
  string oldPos;
  long long contribution;
  int level;
  int id;
  int newPos;
};

bool cmpContribution(const Member &a, const Member &b) {
  if (a.contribution != b.contribution)
    return a.contribution > b.contribution;
  return a.id < b.id;
}

bool cmpDisplay(const Member &a, const Member &b) {
  if (a.newPos != b.newPos)
    return a.newPos < b.newPos;
  if (a.level != b.level)
    return a.level > b.level;
  return a.id < b.id;
}

int main() {
  int n;
  cin >> n;
  vector<Member> gang;
  for (int i = 0; i < n; ++i) {
    Member m;
    cin >> m.name >> m.oldPos >> m.contribution >> m.level;
    m.id = i;
    m.newPos = getRank(m.oldPos);
    gang.push_back(m);
  }

  sort(gang.begin() + 3, gang.end(), cmpContribution);

  for (int i = 3; i < n; ++i) {
    int relativeIdx = i - 3;
    if (relativeIdx < 2)
      gang[i].newPos = 2; // 护法
    else if (relativeIdx < 6)
      gang[i].newPos = 3; // 长老
    else if (relativeIdx < 13)
      gang[i].newPos = 4; // 堂主
    else if (relativeIdx < 38)
      gang[i].newPos = 5; // 精英
    else
      gang[i].newPos = 6; // 帮众
  }

  sort(gang.begin(), gang.end(), cmpDisplay);

  for (int i = 0; i < n; ++i) {
    cout << gang[i].name << " " << rankToStr(gang[i].newPos) << " "
         << gang[i].level << endl;
  }

  return 0;
}
