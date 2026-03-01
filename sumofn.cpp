#include<iostream>
using namespace std;

void sumNum(int i , int sum){
    if(i < 1){
        cout<<"Sum is: "<<sum<<endl;
        return;
    }
    sumNum(i-1,sum+i);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    sumNum(n,0);
    return 0;
}