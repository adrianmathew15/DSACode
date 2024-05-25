#include <iostream>
#include <vector>

using namespace std;

int main() {
    //vector <int> arr = {1,2,5,6,8,9};

    //Fill constructor
    vector<int> arr(10,7);

    vector<int> visited(100,0);

    arr.pop_back();
    arr.push_back(16);

    for(int i=0;i<arr.size(); i++) {
        cout<<arr[i]<<endl;
    }

    cout<<arr.size()<<endl;

    cout<<arr.capacity() <<endl; //doubled itself


}
