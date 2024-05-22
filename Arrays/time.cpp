#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a>b;
}

void bubble_Sort(vector <int> &arr, int n) {
    for(int time=1; time<=n-1; time++) {
        for(int j=0;j<=n-time-1;j++) {
            if(compare(arr[j], arr[j+1])){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main() {
    int n;
    cin>>n;

    vector <int> arr(n,0);

    for(int i=0;i<n;i++) {
        arr[i] = n-i;
    }

    auto start_time = clock();
    //sort(arr.begin(), arr.end());
    bubble_Sort(arr,n);
    auto end_time = clock();

    cout<<end_time-start_time<<endl;

    return 0;
}
