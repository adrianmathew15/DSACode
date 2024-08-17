#include <iostream>
#include <cstring>
using namespace std;

int main() {

    // int alphabets=0;
    // int digits=0;
    // int spaces=0;

    // char ch = cin.get();
    
    // while(ch!='\n') {   

    //     if(ch>='0' and ch<='9') {
    //         digits++;
    //     }else if((ch>='a' and ch<='z') || (ch>='A' and ch<='Z')){
    //         alphabets++;
    //     }else if(ch==' ' or ch=='\t'){
    //         spaces++;
    //     }

    //     ch = cin.get();
    // }

    // cout<<"Alphabets: "<<alphabets<<endl;
    // cout<<"Digits: "<<digits<<endl;
    // cout<<"Spaces: "<<spaces<<endl;

    char sentence[1000];

    cin.getline(sentence, 1000, '.');

    cout<<sentence;

}

