#include <iostream>

using namespace std;

void print_Pairs(int arr[], int n) {
    int x,y;

    for(int i=0; i<n; i++) {
        x = arr[i];
        for(int j=i+1;j<n;j++) {
            y = arr[j];

            cout<<x<<" "<<y<<endl;
        }
        cout<<endl;
    }
}

int main() {
int arr[6] = {10,20,30,40,50,60};
print_Pairs(arr,6);
}
