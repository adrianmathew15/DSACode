/*
Binary String to Number
Given a binary string as input, convert into its decimal form and return it as an integer.

Input Format

In the function a binary string is passed.

Output Format

Return an integer.

Sample Input

111


Sample Output

7
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
 
int binaryToDecimal(string s)
{
    // your code goes here
    int bo = stoi(s);
    int dec = 0;
    int base = 1;
    while(bo) {
        int last_digit = bo%10;
        bo/=10;
        dec += last_digit*base;
        base = base*2;
    }
    return dec;
}

int main() {
    string str = "111";

    cout<<binaryToDecimal(str);
}
