/*Remove Duplicates
Given a string S, the task is to remove all the duplicates from the given string

and return the updated string in sorted order.

Input Format

In the function a string is passed.

Output Format

Return the updated string.



Sample Input

string s = "geeksforgeeks"


Sample Output

"efgkors"
*/

#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s) {
    // Sort the string
    sort(s.begin(), s.end());

    // Create a new string to store the result
    string result = "";

    // Traverse the sorted string and add only unique characters
    for (int i = 0; i < s.length(); i++) {
        // If the current character is different from the previous one, add it to the result
        if (i == 0 || s[i] != s[i - 1]) {
            result += s[i];
        }
    }

    return result;
}

int main() {
    string s = "geeksforgeeks";
    cout << "Original String: " << s << endl;

    string str = removeDuplicate(s);

    cout << "Updated String: " << str << endl;

    return 0;
}
