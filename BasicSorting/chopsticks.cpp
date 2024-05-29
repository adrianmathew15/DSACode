#include<bits/stdc++.h>
using namespace std;

// int pairSticks(vector<int> length, int D)
// {
//     // your code goes here
//     vector<pair<int,int>> vp;
//     int count=0;
    
//     for(int i=0; i<length.size(); i++) {
//         for(int j=1; j<length.size(); j++) {
//             if(abs(length.at(i) - length.at(j)) <= D) {
//                 pair<int,int> p = {length.at(i), length.at(j)};
//                 vp.push_back(p);
//                 length.erase(length.begin()+i, length.begin()+j);
//             }
//         }
//     }
    
//     return vp.size(); 
    
// }

int pairSticks(vector<int> length, int D) {
    // Sort the stick lengths
    sort(length.begin(), length.end());

    int count = 0;

    // Iterate through the sticks and form pairs
    for (int i = 0; i < length.size() - 1; ) {
        // Check if the current stick and the next stick can form a pair
        if (length[i+1] - length[i] <= D) {
            // If they can, increment the count and move past these two sticks
            count++;
            i += 2;
        } else {
            // Otherwise, move to the next stick
            i++;
        }
    }

    return count;
}

int main() {
    vector<int> length = {1, 3, 3, 9, 4}; // Example input
    int D = 2; // Example D value
    int result = pairSticks(length, D);
    std::cout << "Maximum number of pairs: " << result << std::endl;
    return 0;
}
