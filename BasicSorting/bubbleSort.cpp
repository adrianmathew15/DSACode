#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int a[], int n) {
    int count=0;
    for(int times=0; times<n-1; times++) {
        bool flag = false;
        for(int j=0; j<n-times-1; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                flag = true;
                count++;
            }
        }

        if(flag==false) {
             break;
         }
    }
    cout<<"count: "<<count;
}

int main() {
    int a[] = {8, 22, 7, 9, 31, 19, 5, 13};
    bubbleSort(a, 8);

    for(int i=0; i<8; i++) {
        cout<<a[i]<<" ";
    }
}
