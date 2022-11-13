#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int fibo(int x) {
    if (x == 1 or x == 0) {
        return x;
    }
    else {
        return fibo(x - 1) + fibo(x - 2);
    }
}


int main() {
    int x = 9;
    cout << fibo(x) << endl;
    return 0;
}