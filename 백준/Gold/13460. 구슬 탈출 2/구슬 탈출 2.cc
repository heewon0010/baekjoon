#include <iostream>
#include <queue>
#include <tuple>
#include <string>
using namespace std;

const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};

int N, M;
char board[10][10];
bool visited[10][10][10][10];

pair<int, int> move(int x, int y, int dx, int dy, int& count) {
    count = 0;
    while (board[x + dx][y + dy] != '#' && board[x][y] != 'O') {
        x += dx;
        y += dy;
        count++;
        if (board[x][y] == 'O') break;
    }
    return {x, y};
}

int bfs(int rx, int ry, int bx, int by) {
    queue<tuple<int, int, int, int, int>> q;
    q.push({rx, ry, bx, by, 0});
    visited[rx][ry][bx][by] = true;

    while (!q.empty()) {
        auto [crx, cry, cbx, cby, depth] = q.front(); q.pop();
        if (depth >= 10) return -1;

        for (int i = 0; i < 4; i++) {
            int rc, bc;
            auto [nrx, nry] = move(crx, cry, dx[i], dy[i], rc);
            auto [nbx, nby] = move(cbx, cby, dx[i], dy[i], bc);

            if (board[nbx][nby] == 'O') continue;
            if (board[nrx][nry] == 'O') return depth + 1;

            if (nrx == nbx && nry == nby) {
                if (rc > bc) {
                    nrx -= dx[i];
                    nry -= dy[i];
                } else {
                    nbx -= dx[i];
                    nby -= dy[i];
                }
            }

            if (!visited[nrx][nry][nbx][nby]) {
                visited[nrx][nry][nbx][nby] = true;
                q.push({nrx, nry, nbx, nby, depth + 1});
            }
        }
    }

    return -1;
}

int main() {
    cin >> N >> M;
    int rx, ry, bx, by;

    for (int i = 0; i < N; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < M; j++) {
            board[i][j] = row[j];
            if (board[i][j] == 'R') {
                rx = i; ry = j;
            } else if (board[i][j] == 'B') {
                bx = i; by = j;
            }
        }
    }

    cout << bfs(rx, ry, bx, by) << endl;
    return 0;
}
