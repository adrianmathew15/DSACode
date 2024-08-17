/*
Sort Fruits!
Given a vector of pairs of a string and an integer representing names and prices of different fruits. A string is also passed as a parameter with name equals either "price", meaning you have to sort the fruits on the basis of their price or "name", which means you have to sort the fruit on the basis of their name.

Input Format

In the function an integer vector of pairs is passed.

Output Format

Return an integer vector of pairs in sorted order.



Sample Input

{ (Mango,100), (Guava,70), (Grapes,40), (Apple,60), (Banana,30) }, S = "price"


Sample Output

{ ("Banana", 30), ("Grapes", 40), ("Apple", 60), ("Guava", 70), ("Mango", 100) }
*/

#include<bits/stdc++.h>
using namespace std;

bool comparePrices(pair<string, int> p1, pair<string, int> p2) {
    return p1.second < p2.second;
}

bool compareNames(pair<string, int> p1, pair<string, int> p2) {
    return p1.first < p2.first;
}

vector<pair<string,int>> sortFruits(vector<pair<string,int>> v, string S){
    // your code  goes here
    
    if(S=="price") {
        sort(v.begin(), v.end(), comparePrices);
    }else{
        sort(v.begin(), v.end(), compareNames);
    }

    return v;

}

int main() {

    vector<pair<string, int>> vp = { {"Mango",100}, {"Guava",70}, {"Grapes",40}, {"Apple",60}, {"Banana",30} };

    vector<pair<string, int>> sorted_vp = sortFruits(vp, "name");

    for(auto a : sorted_vp) {
        cout<<a.first<<" "<<a.second<<endl;
    }

}


