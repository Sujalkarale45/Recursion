#include<iostream>
using namespace std;

int reverseArray(int l, int r, int arr[]){
    if(l >= r){
        return 0;
    }
    swap(arr[l],arr[r]);
    reverseArray(l+1,r-1,arr);
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(0,n-1,arr);
    cout<<"Reversed array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}