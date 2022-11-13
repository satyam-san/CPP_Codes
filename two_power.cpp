#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


bool two_power(int &n) {
    //& operator of n and n - 1, where n is a power of two will always give 0
    if ((n & (n - 1)) == 0) {
        return 1;
    }
    else {
        return 0;
    }
}


int main() {
    int n = 16;
    cout << two_power(n) << endl;
    return 0;
}