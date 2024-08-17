#include<bits/stdc++.h>
using namespace std;

int main() {

    int x = 10;
    float y = 5.5;

    cout<<&x<<endl;
    cout<<&y<<endl;

    int *xptr = &x;

    cout<<xptr<<endl;

    cout<<&xptr<<endl;

    int ** xxptr = &xptr;

    cout<< xxptr<<endl;

    //Reference Variables
    int x1 = 10;
    int &y1 = x1;

    y1++;
    x1++;

    cout<<x1<<endl;
    cout<<y1<<endl;


}


