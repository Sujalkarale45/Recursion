#include<iostream>
using namespace std;

void print(int n){
    if(n == 0){ // Base Case
        return;
    }
    print(n-1); // Recursive Call first
    cout<<n<<endl; // work while coming back from the recursive call
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n);
    return 0;
}
