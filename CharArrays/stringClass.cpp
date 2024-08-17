#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    system("cls");

    // string s = "hello world";  //dynamic array
    // string s2("Hello");
    
    // getline(cin,s,'.');
    // cout<<s<<endl;

    // for(char ch: s) {
    //     cout<<ch<<",";
    // }

    int n=5;
    vector<string> sarr;
    string temp;

    while(n--) {
        getline(cin,temp);
        sarr.push_back(temp);
    }

    for(string x:sarr) {
        cout<<x<<","<<endl;
    }

}
 