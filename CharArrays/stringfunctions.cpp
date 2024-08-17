#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char a[1000] = "This is my story";
    char b[1000];

    cout<<strlen(a)<<endl;

    strcpy(b,a);   
    cout<<b<<endl;

    char web[] = "www.";
    char domain[] = "vatican.va";
    
    strcat(web,domain);
    
    cout<<web<<endl;

    cout<<strlen(web)<<endl;

    cout<<strcmp(web, a);

}
