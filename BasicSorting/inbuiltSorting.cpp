#include <bits/stdc++.h>

using namespace std;

bool compare(int a, int b) {
    cout<<"Comparing "<<a<<" and "<<b<<endl;
    return a<b;
}

int main() {
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);

    sort(arr, arr+n, compare);
    //sort(arr, arr+n, greater<int>());
    //reverse(arr, arr+n);

    for(int x:arr){
        cout<<x<<" ";
    }
}
