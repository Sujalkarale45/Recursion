#include<iostream>
using namespace std;

void checkPalindrome(int l, int r, string s){
    if(l >= r){
        cout<<"String is a palindrome."<<endl;
        return;
    }
    if(s[l] != s[r]){
        cout<<"String is not a palindrome."<<endl;
        return;
    }
    checkPalindrome(l+1,r-1,s);
}

int main(){
    string s;
    cout<<"Enter a string: ";
    cin>>s;
    checkPalindrome(0,s.length()-1,s);
    return 0;
}