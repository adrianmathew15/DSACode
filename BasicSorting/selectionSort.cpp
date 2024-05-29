#include <bits/stdc++.h>

using namespace std;

void selection_sort(int arr[], int n) {
    for(int pos=0; pos<=n-2; pos++) {
        int current = arr[pos];
        int min_pos = pos;
        for(int j=pos; j<n; j++) {
            if(arr[j] < arr[min_pos]) {
                min_pos = j;
            }
        }
        swap(arr[min_pos], arr[pos]);
    }
}

int main() {
    int arr[] = {10, 20, 9, 8, 3, 1};
    selection_sort(arr, 6);
    for(int x: arr) {
        cout<<x<<" ";
    }
}

