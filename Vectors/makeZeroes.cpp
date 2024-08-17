/*
Make Zeroes
Given a two-dimensional array, if any element within is zero, make its whole row and column zero. For example, consider the matrix below.

Input Format

In the function a 2d vector is passed.

Output Format

Return the updated 2d vector.

Sample Input

{ {5, 4, 3, 9}, {2, 0, 7, 6}, {1, 3, 4, 0}, {9, 8, 3, 4} }


Sample Output

{ {5, 0, 3, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {9, 0, 3, 0} }
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    // your code goes here

    int n = arr.size();

    //Flags
    vector<bool> rows(n, false);
    vector<bool> cols(n, false);


    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i][j]==0) {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }

    for(int i=0; i<n; i++) {
        if(rows[i]) {
            for(int j=0; j<n; j++) {
                arr[i][j] = 0;
            }
        }
    }

    for(int j=0; j<n; j++) {
        if(cols[j]) {
            for(int i=0; i<n; i++) {
                arr[i][j] = 0;
            }
        }
    }


    return arr;
}

int main() {

    vector<vector<int>> a = { {5, 4, 3, 9}, {2, 0, 7, 6}, {1, 3, 4, 0}, {9, 8, 3, 4} };

    vector<vector<int>> newt = makeZeroes(a);

    for(auto s : newt) {
        for(auto t : s) {
            cout<<t<<" ";
        }
        cout<<endl;
    }

}

