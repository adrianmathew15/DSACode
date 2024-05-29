#include <bits/stdc++.h>
using namespace std;

int largestUndefendedRectangle(int width, int height, vector<pair<int, int>> towers) {
    // Extract the x and y coordinates of the towers
    vector<int> x_coords, y_coords;
    for (auto& tower : towers) {
        x_coords.push_back(tower.first);
        y_coords.push_back(tower.second);
    }

    // Sort the coordinates
    sort(x_coords.begin(), x_coords.end());
    sort(y_coords.begin(), y_coords.end());

    // Find the maximum gaps in x and y coordinates
    int max_x_gap = max(x_coords[0] - 1, width - x_coords.back());
    int max_y_gap = max(y_coords[0] - 1, height - y_coords.back());

    for (int i = 1; i < x_coords.size(); ++i) {
        max_x_gap = max(max_x_gap, x_coords[i] - x_coords[i - 1] - 1);
    }

    for (int i = 1; i < y_coords.size(); ++i) {
        max_y_gap = max(max_y_gap, y_coords[i] - y_coords[i - 1] - 1);
    }

    // The penalty is the area of the largest undefended rectangle
    return max_x_gap * max_y_gap;
}

int main() {
    int width = 15;
    int height = 8;
    vector<pair<int, int>> towers = {{3, 8}, {11, 2}, {8, 6}};
    
    int result = largestUndefendedRectangle(width, height, towers);
    cout << "Largest undefended rectangle has area: " << result << endl;

    return 0;
}
