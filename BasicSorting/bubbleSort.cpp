#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int a[], int n) {
    for(int times=0; times<n-1; times++) {
        bool flag = false;
        for(int j=0; j<n-times-1; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                flag = true;
            }
        }

        if(flag==false) {
             break;
         }
    }
}

int main() {
    int a[] = {5,4,3,2,1};
    bubbleSort(a, 5);

    for(int x: a) {
        cout<<x<<" ";
    }
}
