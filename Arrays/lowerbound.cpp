/*
Lower Bound
Given an array of integers A (sorted) and a integer Val.

Implement a function that takes A and Val as input parameters and returns 
the lower bound of Val.

Note : If Val is not present in array then Lower bound of a given integer means 
integer which is just smaller than given integer.

Otherwise Val itself is the answer.

If Val is less than smallest element of array A then return '-1' in that case.
Example 1  :

A = [-1, -1, 2, 3, 5]

Val = 4

Answer :  3

Since 3 is just smaller than 4 in the array.

Example 2  :

A = [1, 2, 3, 4, 6]

Val = 4

Answer :  4
Since 4 is equal to 4.
*/

#include <bits/stdc++.h>

using namespace std;

int lowerBound(vector<int> A, int Val) {
    // your code goes here
    int start=0;
    int end = A.size() - 1;
    int lowerBound = -1;

    while(start <= end) {
        int mid = (start+end)/2;

        if(A[mid] == Val) {
            return A.at(mid);
        }else if(A[mid] <= Val) {
            lowerBound = A[mid]; //Update answer and look for bigger number
            start = mid+1;
        }else if(A[mid] > Val) {
            end=mid-1;
        }
    }

    return lowerBound;
}

int main() {

    std::vector<int> A = {1, 2, 8, 10, 12, 15};
    int Val = 5;

    sort(A.begin(), A.end());
    
    cout<<lowerBound(A, Val);

}

