#include<iostream>
using namespace std;

void print() {
    cout << "Hello, World!" << endl;
    print();
}

int main() {
    print();
    return 0;
}
