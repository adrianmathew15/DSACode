// You are using GCC
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main() {
    string a,b,c;
    cin>>a>>b>>c;
    
    for(int i=0; i<a.length(); i++) {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') {
            a[i] = '$';
        }
    }
    
    for(int i=0; i<b.length(); i++) {
        if(b[i]!='a' && b[i]!='e' && b[i]!='i' && b[i]!='o' && b[i]!='u' &&
           b[i]!='A' && b[i]!='E' && b[i]!='I' && b[i]!='O' && b[i]!='U') {
            b[i] = '#';
        }        
    }
    
    // for(int i=0; i<c.length(); i++) {
    //     toupper(c[i]);
    // }
    
    transform(c.begin(), c.end(), c.begin(), ::toupper); 

    cout<<a<<b<<c;
}
