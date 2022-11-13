#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
using namespace std;


int steps(int k) {
    int m = 0;
    int i = 0;

    while (m <= k) {
        m = pow(2, i);
        i++;
    }
    
    int ans;
    (m == 1) ? ans = 1 : ans = m / 2;
    return ans;
}


int main() {
    int k;
    cin >> k;

    int s = 0;
    int c = 0;
    while (s != k) {
        s = s + steps(k - s);
        c++;
    }

    cout << c << endl;
    return 0;
}