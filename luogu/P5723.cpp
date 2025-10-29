#include <iostream>
#include <vector>

int main() {
    int L;
    std::cin >> L;

    std::vector<int> primes;
    int sum = 0;

    for (int i = 2; sum < L; i ++) {
        bool isPrime = true;
        for (int prime: primes) {
            if (i % prime == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            if (sum + i > L) {
                break;
            }
            std::cout << i << std::endl;
            primes.push_back(i);
            sum += i;
        }
    }

    std::cout << primes.size() << std::endl;

    return 0;
}
