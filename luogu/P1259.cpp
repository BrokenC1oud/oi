#include <iostream>
#include <string>
#include <vector>

using namespace std;

string board;

void print_board() {
    cout << board << endl;
}

void move_pieces(int pos, int space) {
    board[space] = board[pos];
    board[space + 1] = board[pos + 1];
    board[pos] = '-';
    board[pos + 1] = '-';
    print_board();
}

void solve(int n, int space) {
    if (n == 4) {
        move_pieces(3, space);
        move_pieces(8, 3);
        move_pieces(1, 8);
        move_pieces(6, 1);
        move_pieces(0, 6);
        return;
    }

    move_pieces(n - 1, space);
    move_pieces(2 * n - 2, n - 1);
    solve(n - 1, 2 * n - 2);
}

int main() {
    int n;
    if (!(cin >> n)) return 0;

    board = string(n, 'o') + string(n, '*') + "--";

    print_board();
    solve(n, 2 * n);

    return 0;
}
