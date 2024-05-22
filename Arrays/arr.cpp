#include <iostream>

using namespace std;

void print(int arr[], int n) {  //or *arr

    cout<<"In Function "<<sizeof(arr)<<endl; //8

    //int n = sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<endl;
    }

}

int main() {
    
    // int marks[10]={-1,-1};

    // int n;
    // cout<<"Enter the no of students ";
    // cin>>n;

    // //marks[0]=-1;

    // for(int i=2;i<=n;i++) {
    //     cin>>marks[i];
    //     marks[i]=marks[i]*2;
    // } 


    // for(int i=0;i<=100;i++) {
    //     cout<<marks[i]<<" ,";
    // }

    int arr[] = {1,2,3,4,5,6}; //6*4=24bytes

    int n = sizeof(arr)/sizeof(int);

    cout<<"In Main "<<sizeof(arr)<<endl;

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<endl;
    }

    print(arr, n);

    cout<<endl;

}
