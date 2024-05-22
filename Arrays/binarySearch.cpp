#include <iostream>

using namespace std;

int binary_Search(int arr[], int n, int key) {
    int start = 0;
    int end = n-1;
   
    while(start<=end) {
        int mid = (start+end)/2;
        if(key == arr[mid]) {
            return mid;
        } else if (key > arr[mid]) {
            start=mid+1;
        } else {
            end=mid-1;
    }
    }

    return -1;
}

int main() {
    int n,key,index;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n] = {};

    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    cout<<"Enter key: ";
    cin>>key;

    index = binary_Search(arr,n,key);
    if(index == -1) {
        cout<<"Element not found"<<endl;
    }else {
        cout<<"Element found at "<<index<<endl;
    }
    
    return 0;
}
