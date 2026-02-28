#include<iostream>
using namespace std;

void printName(int i, int n){
    if(i > n){
        return;
    }
    cout<<"Sujal"<<endl;
    printName(i+1,n);
}

int main(){
    int n;
    cout<<"Enter the number of times to print: ";
    cin>>n;
    printName(1,n);
    return 0;
}