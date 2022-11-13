#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int power(int x, int y, int mod) {
    int ans = 1;

    while (y > 0) {
        int last = (y & 1);
        if (last) {
            ans = ans * x;
        }
        x = x * x;
        y = y >> 1;
    }

    return (ans % mod);
}


int main() {
    int x = 3;
    int y = 5;
    int mod = 5;
    cout << power(x, y, mod) << endl;
    return 0;
}