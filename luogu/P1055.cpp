#include <cstdio>
#include <string>

int main() {
    int a, b, c, d, e, f, g, h, i;
    char j;

    scanf("%1d-%1d%1d%1d-%1d%1d%1d%1d%1d-%c", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);

    int cs = a * 1 + b * 2 + c * 3 + d * 4 + e * 5 + f * 6 + g * 7 + h * 8 + i * 9;
    cs = cs % 11;

    if (cs == 10)
        cs = 'X';
    else cs = '0' + cs;

    if (cs == j) printf("Right");
    else printf("%d-%d%d%d-%d%d%d%d%d-%c", a, b, c, d, e, f, g, h, i, cs);

    return 0;
}
