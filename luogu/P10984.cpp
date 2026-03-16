#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> standard_codes = {
        "1111110", // 0
        "0110000", // 1
        "1101101", // 2
        "1111001", // 3
        "0110011", // 4
        "1011011", // 5
        "1011111", // 6
        "1110000", // 7
        "1111111", // 8
        "1111011"  // 9
    };

    vector<string> faulty_states = {
        "0000011", "1001011", "0000001", "0100001", "0101011", "0110110",
        "1111111", "0010110", "0101001", "0010110", "1011100", "0100110",
        "1010000", "0010011", "0001111", "0101101", "0110101", "1101010"
    };

    long long total_combinations = 1;

    for (const string& faulty : faulty_states) {
        int possible_digits_for_this_pos = 0;

        for (const string& standard : standard_codes) {
            bool is_match = true;
            for (int i = 0; i < 7; ++i) {
                if (faulty[i] == '1' && standard[i] == '0') {
                    is_match = false;
                    break;
                }
            }
            if (is_match) {
                possible_digits_for_this_pos++;
            }
        }
        
        total_combinations *= possible_digits_for_this_pos;
    }

    cout << total_combinations << endl;

    return 0;
}