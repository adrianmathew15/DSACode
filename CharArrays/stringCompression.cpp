#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
    // your code goes here
    int read=0, write=0;
    int n = chars.size();
    while(read<n){
        
        char current = chars[read];
        int count=0;
        
        //Count the occurrences
        while(read<n && chars[read] == current) {
            read++;
            count++;
        }
        
        chars[write++] = current;
        
        if(count>1) {
            string str = to_string(count);
            for(char c: str) {
                chars[write++] = c;
            }
        }
    
    }
    
    return write;
}

int main() {

    vector<char> chars = {'a', 'a', 'b', 'b', 'b','c', 'c', 'c','c','c'};
    
    // Call the compress function
    int newLength = compress(chars);
    
    // Output the result
    cout << "Compressed Length: " << newLength << endl;
    cout << "Compressed Characters: ";
    for (int i = 0; i < newLength; ++i) {
        cout << chars[i];
    }
    cout << endl;
    
    return 0;    
}
