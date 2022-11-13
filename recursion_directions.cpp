#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;



//from base case
void inc(int n) {
    if (n == 0) {
        return;
    }
    inc(n - 1);
    cout << n << " ";
}


//to base case
void dec(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    dec(n - 1);
}


int main() {
    int n;
    cin >> n;
    inc(n);
    
    dec(n);
    return 0;
}