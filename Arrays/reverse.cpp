#include <iostream>

using namespace std;

void reverse(int arr[], int n) {
    int start=0;
    int end=n-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}

int main() {
    int arr[] = {10,20,30,40,50};
    reverse(arr,5);

    for(int i=0;i<5;i++) {
        cout<<arr[i]<<" ";
    }    

}
