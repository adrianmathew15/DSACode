#include <bits/stdc++.h>
using namespace std;

pair<int, int> search(int v[][4], int m, int n, int key) {

    if(key > v[m-1][n-1] || key < v[0][0]) {
        return {-1, -1};
    }

    int i = 0;
    int j = n - 1;

    while (i <= m - 1 && j >= 0) {
        if (key == v[i][j]) {
            return {i, j};
        } else if (key > v[i][j]) {
            i++;
        } else {
            j--;
        }
    }

    return {-1, -1};
}

int main() {

    int m = 4;
    int n = 4;

    int v[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};

    pair<int, int> coords = search(v, m, n, 10);

    cout << coords.first << " " << coords.second;

    return 0;
}
