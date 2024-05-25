//Including all negative cases

#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
     int max=INT_MIN;
     int current_sum=0;
    
     for(int i=0; i<A.size(); i++) {
          current_sum+=A[i];
         
          if(current_sum>max) {
              max = current_sum;
          }
         
           if(current_sum<0) {
               current_sum=0;
           }
     }
     return max;
    
}