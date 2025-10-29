#include <iostream>

int main() {
  int sims_count = 0;
  std::cin >> sims_count;

  int A, B, C, rounds;
  int A_, B_, C_;

  for (int sim = 0; sim < sims_count; sim++) {
    std::cin >> A >> B >> C >> rounds;
    for (int round = 0; round < rounds; round++) {
      A_ = (B + C) / 2;
      B_ = (A + C) / 2;
      C_ = (A + B) / 2;
      A = A_;
      B = B_;
      C = C_;
      std::cout << A << B << C;
    }
  }

  return 0;
}
