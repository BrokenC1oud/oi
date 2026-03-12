#include <iostream>
#include <chrono>
#include <format>

using namespace std;
using namespace std::chrono;

int main() {
    long long input_ms;
    cin >> input_ms;

    milliseconds ms{input_ms};

    auto days_duration = floor<days>(ms); 
    auto time_of_day = hh_mm_ss{ms - days_duration}; 

    cout << std::format("{:02}:{:02}:{:02}", 
                        time_of_day.hours().count(), 
                        time_of_day.minutes().count(), 
                        time_of_day.seconds().count()) << endl;

    return 0;
}