#include <iostream>
#include <vector>
using namespace std;

int main() { 
   
   vector<int> arr = {1,2,10,12,15};

//    arr.pop_back();
//    arr.push_back(17);

//    for(int i=0; i<arr.size(); i++) {
//     cout<<arr[i]<<endl;
//    }

//    cout<<arr.size()<<endl;
//    cout<<arr.capacity()<<endl;

    //Fill Constructor
    vector<int> fill(10, 7); //(no of elem, val)

    for(int i=0; i<fill.size(); i++) {
        cout<<fill[i]<<endl;
    }

    vector<int> visited(100, 0);

} 
