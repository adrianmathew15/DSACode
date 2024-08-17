#include <iostream>
#include <cstring>
using namespace std;

int main() {
    
    char sentence[1000];

    // cin>>sentence;
    // cout<<sentence;

    char temp = cin.get();

    int len = 0;

    while(temp!='#'){
        sentence[len++] = temp;
        // len++;
        // cout<<temp;
        temp=cin.get();
    }

    sentence[len] = '\0';
    cout<<"\nLength: "<<len<<endl;
    cout<<sentence<<endl;
}
