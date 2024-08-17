/*
Vowel Find
Given a string consisting of lowercase English alphabets, return a string containing all the vowels present in S in serial order.

Input Format

In the function a string S is passed.

Output Format

Return a string.

Sample Input

S = "aeoibsddaeioudb"


Sample Output

"aeoiaeiou"
*/

#include<bits/stdc++.h>
using namespace std;

string vowel(string S){
    // your code goes here
    string result = "";
    for(int i=0; i<S.length(); i++) {
        if(S[i]=='a' || S[i] == 'e' || S[i]== 'i' || S[i]=='o' || S[i]=='u') {
            result+=S[i];
        }
    }
    return result;
} 

int main() {
    string val = "aeoibsddaeioudb";

    cout<<vowel(val);
}

