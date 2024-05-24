#include <iostream>

using namespace std;

void print_SubArrays(int arr[],int n) {
    for(int i=0;i<n;i++) {
        for(int j=i; j<n; j++) {
            for(int k=i;k<=j;k++) {
                cout<<arr[k]<<",";
            }
            cout<<endl;
        }
    }
}

//Brute force -O(n^3)
void sum_SubArray(int arr[], int n) {
    int sum=0;
    int max=sum;
    for(int i=0;i<n;i++) {
        for(int j=i; j<n; j++) {
            sum=0;
            for(int k=i;k<=j;k++) {
              cout<<arr[k]<<",";
              sum+=arr[k];  
            }
            cout<<" "<<sum;
            if(sum>max) {
                max=sum;
            }
            cout<<endl;
        }
    }

    cout<<"Max: "<<max;
}

//Prefix-Sums - O(n^2)

void prefix_Sum(int arr[], int n) {
    int prefix[n] = {0};
    prefix[0] = arr[0];
    int sum,max=0;

    for(int i=1;i<n;i++) {
        prefix[i] = prefix[i-1] + arr[i]; 
    }

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            sum = (i>0) ? prefix[j] - prefix[i-1] : prefix[j]; 
            cout<<" "<<sum<<endl;
        }
        if(sum>max) {
            max=sum;
        }
    }
    cout<<"Max: "<<max;
}

//Kadane's Algorithm O(n)

void kadanes(int arr[], int n) {
    int current_sum=0;
    int max=0;
    
    for(int i=0; i<n; i++) {
        current_sum += arr[i];
        if(current_sum<0) {
            current_sum=0;
        }
        if(current_sum>max) {
            max = current_sum;
        }
    }
 
    cout<<"Max: "<<max;
}

int main() {
    int a[] = {1,2,3,4,5,6};
    //print_SubArrays(a,6);

    //sum_SubArray(a,6);

    //prefix_Sum(a,6);

    kadanes(a,6);

}
