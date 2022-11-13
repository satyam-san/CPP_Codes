#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


void clear_i(int &x, int i) {
    int mask = ~(1 << i);
    x = (x & mask);
}


int main() {
    int x = 5;
    int i = 2;
    clear_i(x, i);
    cout << x << endl;
    return 0;
}