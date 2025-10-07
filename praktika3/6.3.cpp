#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of rows and columns (N M): ";
    cin >> n >> m;

    if (n <= 0 || m <= 0 || n > 32 || m > 32) {
        cout << "Invalid map size\n";
        return 1;
    }

    int w;
    cout << "Enter number of mushrooms: ";
    cin >> w;

    vector<vector<int>> field(n, vector<int>(m, 0));
    vector<vector<bool>> mushrooms(n, vector<bool>(m, false));

    cout << "Enter " << w << " pairs of coordinates (row column), starting from 1:\n";
    for (int i = 0; i < w; i++) {
        int r, c;
        cin >> r >> c;
        if (r >= 1 && r <= n && c >= 1 && c <= m) {
            mushrooms[r - 1][c - 1] = true;
        }
    }

    int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
    int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mushrooms[i][j]) continue;
            int count = 0;
            for (int k = 0; k < 8; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];
                if (ni >= 0 && ni < n && nj >= 0 && nj < m && mushrooms[ni][nj]) {
                    count++;
                }
            }
            field[i][j] = count;
        }
    }

    cout << "\nFinal field:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mushrooms[i][j]) cout << "*";
            else cout << field[i][j];
        }
        cout << "\n";
    }

    return 0;
}
