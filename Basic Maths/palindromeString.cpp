#include <iostream>
#include <string.h>
using namespace std;

bool palindrome (string s) {
    int length = s.length()-1;
    int start= 0;

    while(start<= length)
    {
        if(tolower(s[start] != tolower(s[length])))
        return false;
        else{
        start++;
        length--;
        }
    }
    return true;
}                                                            

int main(){
    string s = "ashish";
    string st = "olo";
    if(palindrome(s))
    cout<<"true";
    if(palindrome(st))
    cout<<"true 1";

    return 0;
}