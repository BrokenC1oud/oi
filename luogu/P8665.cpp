#include <iostream>
#include <string>
#include <cstdio>
#include <iomanip>

using namespace std;

long long get_seconds() {
    int h1, m1, s1, h2, m2, s2, d = 0;
    string line;
    getline(cin, line);
    if (line.empty()) getline(cin, line);

    int res = sscanf(line.c_str(), "%d:%d:%d %d:%d:%d (+%d)", &h1, &m1, &s1, &h2, &m2, &s2, &d);

    long long start = h1 * 3600LL + m1 * 60LL + s1;
    long long end = h2 * 3600LL + m2 * 60LL + s2 + d * 86400LL;

    return end - start;
}

void solve() {
    long long time1 = get_seconds();
    long long time2 = get_seconds();

    long long avg_flight_time = (time1 + time2) / 2;

    int h = avg_flight_time / 3600;
    int m = (avg_flight_time % 3600) / 60;
    int s = avg_flight_time % 60;

    printf("%02d:%02d:%02d\n", h, m, s);
}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    string dummy;
    getline(cin, dummy);

    while (t--) {
        solve();
    }
    return 0;
}