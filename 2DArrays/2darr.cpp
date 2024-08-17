#include <iostream>
using namespace std;


int main() {

    char numbers[][10] = {
        "one",
        "two",
        "three",
        "forty",
        "eight",
        "hundred"
    };

    int num[][10] = {
        {1,2,3},
        {1,2,3},
        {1,2,3}
    };

    for(int i=0; i<6; i++) {
        cout<<numbers[i]<<endl;
    }

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++)
    cout<<num[i][j]<<endl;
    }
}

