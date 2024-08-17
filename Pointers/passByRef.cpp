#include<bits/stdc++.h>
using namespace std;

//Pass By Ref
void applyTax(int &income) {

    float tax = 0.10;
    income = income - income*tax; //(1 - tax)*income;
}

int main() {

    int income;
    cin>>income;

    applyTax(income);

    cout<<income<<endl;
}
 