#include<iostream>
using namespace std;

int count(int n) {
    if (n == 4) {
        return n;
    }
    cout << n << endl;
    n++;
    count(n);
}

int main() {
    count(0);
    return 0;
}