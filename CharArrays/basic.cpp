#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[] = {'a','b','c','d','\0'};
    cout << a <<endl;

    char second[100];
    cin>>second;

    cout<<second<<endl;

    cout<<strlen(a) <<endl; //num of visible characters
    cout<<sizeof(a) <<endl; //+1 because of null char

    char b[] = "efghi";
    cout << b <<endl;

    return 0;

}
