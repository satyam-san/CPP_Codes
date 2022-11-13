#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

void clear(int &n, int i) {
    int mask = (-1 << i);
    n = n & mask;
}


int main() {
    int n = 8;
    int i = 4;
    clear(n, i);
    cout << n << endl;
    return 0;
}