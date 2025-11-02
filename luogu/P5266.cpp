#include <iostream>
#include <map>
#include <string>

int main() {
  int n;
  std::cin >> n;

  std::map<std::string, int> db;
  for (int i = 0; i < n; i++) {
    int op;
    std::cin >> op;
    if (op == 1) {
      std::string name;
      int score;
      std::cin >> name >> score;
      db[name] = score;
      std::cout << "OK" << std::endl;
    } else if (op == 2) {
      std::string name;
      std::cin >> name;
      int count = db.count(name);
      if (count != 0) {
        std::cout << db[name] << std::endl;
      } else {
        std::cout << "Not found" << std::endl;
      }
    } else if (op == 3) {
      std::string name;
      std::cin >> name;
      if (db.count(name)) {
        db.erase(name);
        std::cout << "Deleted successfully" << std::endl;
      } else {
        std::cout << "Not found" << std::endl;
      }
    } else if (op == 4) {
      std::cout << db.size() << std::endl;
    }
  }

  return 0;
}
