#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int tiling(int n, int m) {
    if (n < m) {
        return 1;
    }
    return tiling(n - 1, m) + tiling(n - m, m);
}


int main() {
    int n = 9;
    int m = 3;
    cout << tiling(n, m) << endl;
    return 0;
}