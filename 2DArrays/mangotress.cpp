/*
Mango Trees

Ramu's father has left a farm organized as an N × N grid. Each square in the grid either has or does not have a mango tree. He has to divide the farm with his three sisters as follows: he will draw one horizontal line and one vertical line to divide the field into four rectangles. His sisters will choose three of the four smaller fields and he gets the last one.

He wants to divide the field so that he gets the maximum number of mangos possible, assuming that his sisters will pick the best three rectangles.

For example, suppose the field looks as follows:

      . # # . . .
      # . . # # .
      . # . . . .
      . # # . . #
      # . . # # .
      . # . . . .
      
Ramu can ensure that he gets at least 3 mango trees by cutting as follows:

        . # | # . . .
        # . | . # # .
        . # | . . . .
      ------+---------
        . # | # . . #
        # . | . # # .
        . # | . . . .

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxMangoes(vector<vector<int>>& grid, int n) {
    vector<vector<int>> prefixSum(n + 1, vector<int>(n + 1, 0));

    // Build prefix sum matrix
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            prefixSum[i][j] = grid[i-1][j-1] 
                            + prefixSum[i-1][j] 
                            + prefixSum[i][j-1] 
                            - prefixSum[i-1][j-1];
        }
    }

    int maxMinMangoes = 0;

    // Try all possible divisions by selecting a horizontal line and a vertical line
    for (int i = 1; i < n; i++) {  // horizontal cut
        for (int j = 1; j < n; j++) {  // vertical cut
            int topLeft = prefixSum[i][j];
            int topRight = prefixSum[i][n] - topLeft;
            int bottomLeft = prefixSum[n][j] - topLeft;
            int bottomRight = prefixSum[n][n] - (topLeft + topRight + bottomLeft);

            // Find the minimum number of mangoes in the four rectangles
            int minMangoes = min({topLeft, topRight, bottomLeft, bottomRight});

            // Maximize the minimum
            maxMinMangoes = max(maxMinMangoes, minMangoes);
        }
    }

    return maxMinMangoes;
}

int main() {
    int n;
    cout << "Enter the size of the grid (n x n): ";
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n, 0));

    cout << "Enter the grid values (# for tree, . for empty):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char ch;
            cin >> ch;
            grid[i][j] = (ch == '#') ? 1 : 0;
        }
    }

    cout << "Maximum number of mangoes Ramu can get: " << maxMangoes(grid, n) << endl;

    return 0;
}
