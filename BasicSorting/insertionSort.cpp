#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int arr[], int n) {

    for(int i=1; i<=n-1; i++) {
        int prev = i-1;
        int current = arr[i];
        //loop to find right index where current element is to be inserted
        while(prev>0 and arr[prev] > current) {
            arr[prev+1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev+1] = current;
    }
}

int main() {

    int arr[] = {-2, 10, 9, 80, 26, 34, 3};
    insertion_sort(arr, 7);

    for(int c : arr) {
        cout<<c<<" ";
    }

}
