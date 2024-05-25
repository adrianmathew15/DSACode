#include<bits/stdc++.h>
using namespace std;

// vector<int> kRotate(vector<int> arr, int k){
//     // your code  goes here
    
//     int n = arr.size();
//     k=k%n;
    
//     reverse(arr.begin(), arr.begin() + n-k);
//     reverse(arr.begin() + n-k, arr.end());
//     reverse(arr.begin(), arr.end());
    
//     return arr;
// }

vector<int> kRotate(vector<int> arr, int k){

    int n = arr.size();
    k=k%n;

    vector<int> out;

    for(int i=n-k; i<n; i++) {
        out.push_back(arr[i]);
    }

    for(int i=0; i<n-k; i++) {
        out.push_back(arr[i]);
    }

    return out;
}

int main() {
    vector<int> a = {1,2,3,4,5,6,7,8};
    a = kRotate(a,3);

    for(int b : a) {
        cout<<b<<" ";
    }
}












