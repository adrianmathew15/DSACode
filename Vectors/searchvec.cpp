#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool mypred(int i, int j) {
    return (i==j);
}

bool myfunction (int i,int j) {
     return (i<j); 
}

int main() { 

    vector<int> arr = {10,11,12,2,3,4,6,7,8};

    int key;
    cin>>key;

    vector<int>::iterator it = find(arr.begin(), arr.end(), key);

    if(it!=arr.end()) {
    cout<<"Present at index "<<it - arr.begin()<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }

    vector<int> haystack;
    for(int i=1; i<10; i++) {
        haystack.push_back(i*10);
    }

    int needle1[] = {40,50,60,70};
    vector<int>::iterator it1;

    it1 = search(haystack.begin(), haystack.end(), needle1, needle1+4);

    cout<<"Needle 1 found at position: "<<it1-haystack.begin()<<endl;

    int needle2[] = {20,30,50};
    it1 = search(haystack.begin(), haystack.end(), needle2, needle2+3, mypred);

    if(it1!=haystack.end()) {
    cout<<"Needle 2 found at position: "<<it1-haystack.begin()<<endl;
    }else{
        cout<<"Needle 2 not found"<<endl;
    }

    //Binary Search
    int myints[] = {1,2,3,4,5,4,3,2,1};
    vector<int> v(myints,myints+9);                         // 1 2 3 4 5 4 3 2 1

  // using default comparison:
  sort (v.begin(), v.end());

  cout << "looking for a 3... ";
  if (binary_search (v.begin(), v.end(), 3))
    cout << "found!\n"; else cout << "not found.\n";

  // using myfunction as comp:
  sort (v.begin(), v.end(), myfunction);

  cout << "looking for a 6... ";
  if (binary_search (v.begin(), v.end(), 6, myfunction))
    cout << "found!\n"; else cout << "not found.\n";

    return 0;

}
