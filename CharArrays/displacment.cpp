/*
Given a ling route containing N,S,E,W directions, find the shortest path
to reach the location.

Sample i/p: SNNNEWE

o/p: NNE
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char route[1000];
    cin.getline(route, 1000);

    int x=0;
    int y=0;
    for(int i=0; route[i]!='\0'; i++){

        switch (route[i])
        {
        case 'N':
            y++;
            break;
        
        case 'S':
            y--;
            break;

        case 'E':
            x++;
            break;
        
        case 'W':
            x--;
            break;

        default:
            break;
        }
    }

    cout<<"Final x and y is "<<x<<","<<y<<endl;

    if(x>=0 and y>=0) { //1st quadrant
        while(y--) {
            cout<<"N";
        }
        while(x--) {
            cout<<"E";
        }
    }

    if(x<=0 and y>=0) { //2nd quadrant
        while(y--) {
            cout<<"N";
        }
        while(x++) {
            cout<<"W";
        }
    }

    if(x<=0 and y<=0) { //3rd quadrant
        while(y++) {
            cout<<"S";
        }
        while(x++) {
            cout<<"W";
        }
    }

    if(x>=0 and y<=0) { //4th quadrant
        while(y++) {
            cout<<"S";
        }
        while(x--) {
            cout<<"E";
        }
    }

    cout<<endl;


}
