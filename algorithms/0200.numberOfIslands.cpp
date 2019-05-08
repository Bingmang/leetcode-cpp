#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty()) {
            return 0;
        }
        int n_row = grid.size();
        int n_col = grid[0].size();
        int res = 0;
        vector<vector<bool>> visited(n_row, vector<bool>(n_col));
        vector<int> dirX{-1, 0, 1, 0}, dirY{0, 1, 0, -1};
        
        for (int i = 0; i < n_row; i++) {
            for (int j = 0; j < n_col; j++) {
                if (grid[i][j] == '0' || visited[i][j])
                    continue;
                ++res;
                queue<int> q{{i * n_col + j}};
                while (!q.empty()) {
                    int t = q.front(); q.pop();
                    for (int k = 0; k < 4; k++) {
                        int x = t / n_col + dirX[k];
                        int y = t % n_col + dirY[k];
                        if (x < 0 || x >= n_row || y < 0 || y >= n_col || grid[x][y] == '0' || visited[x][y])
                            continue;
                        visited[x][y] = true;
                        q.push(x * n_col + y);
                    }
                }
            }
        }
        return res;
    }
};
