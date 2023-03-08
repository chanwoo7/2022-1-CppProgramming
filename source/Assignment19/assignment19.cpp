#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int num;
        cin >> num;
        char board[8][8]{};

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++)
                board[i][j] = '+';
        }
        board[3][3] = 'O'; board[4][4] = 'O';
        board[3][4] = 'X'; board[4][3] = 'X';

        char color, o_color;
        int cnt = 0;

        while (num-- > 0) {
            int r, c;
            cin >> r >> c;
            r = r - 1; c = c - 1;
            if (++cnt % 2 == 0) {
                color = 'O'; o_color = 'X';
            }
            else {
                color = 'X'; o_color = 'O';
            }

            board[r][c] = color;

            for (int i = r - 1; i <= r + 1; i++) {
                if (i < 0 || i > 7)
                    continue;
                for (int j = c - 1; j <= c + 1; j++) {
                    if (j < 0 || j > 7 || board[i][j] != o_color)
                        continue;
                    int tmp_r = i, tmp_c = j;

                    while (board[tmp_r][tmp_c] == o_color) {
                        if ((tmp_r + i - r < 0) || (tmp_r + i - r > 7) ||
                            (tmp_c + j - c < 0) || (tmp_c + j - c > 7))
                            break;
                        tmp_r += i - r; tmp_c += j - c;
                    }

                    if (board[tmp_r][tmp_c] == color) {
                        int k = i, l = j;
                        while (k != tmp_r + i - r || l != tmp_c + j - c) {
                            board[k][l] = color;
                            k += i - r; l += j - c;
                        }
                    }
                }
            }
        }

        int b_cnt = 0, w_cnt = 0;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (board[i][j] == 'X')
                    b_cnt++;
                else if (board[i][j] == 'O')
                    w_cnt++;
            }
        }

        cout << b_cnt << " " << w_cnt << endl;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++)
                cout << board[i][j];
            cout << endl;
        }
    }
    return 0;
}