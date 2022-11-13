#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int factorial(int x) {
    if (x == 0) {
        return 1;
    }
    else {
        return factorial(x - 1) * x;
    }
}


int main() {
    int x = 9;
    int ans = factorial(x);
    cout << ans << endl;
    return 0;
}