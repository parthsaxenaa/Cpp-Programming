#include<iostream>
using namespace std;

// Function to calculate the power of a number
int pow(int m, int n) {
    int p = 1;
    
    for (int i = 0; i < n; i++) {
        p *= m;
    }
    
    return p;
}

int main() {
    cout << pow(2, 5);
    return 0;
}
