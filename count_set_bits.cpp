#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int count(int n) {
    int c = 0;
    // for (int i = 0; i < 64; i++) {
    //     if ((n & 1) == 1) {
    //         c++;
    //     }
    //     n = (n >> 1);
    // }

    // method 2
    // while (n > 0) {
    //     int last = (n & 1);
    //     c = c + last;
    //     n = (n >> 1);
    // }

    // fastest method
    while (n > 0) {
        n = (n & (n - 1));
        c++;
    }
    return c;
}


int main() {
    int n = 9;
    cout << count(n) << endl;
    return 0;
}