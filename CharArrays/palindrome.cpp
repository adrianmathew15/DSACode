#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    // your code goes here
    
    int len = str.length();
    int start = 0;
    int end = len-1;
    
    while(start<end){
        if(str[start] == str[end]) {
            start++;
            end--;
        }else{
            return false;
        }
    }
    return true;
    
}

int main() {

    char arr[1000] = "abba";

    cout<<isPalindrome(arr);

    return 0;
}

