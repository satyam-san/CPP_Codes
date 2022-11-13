#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


bool getBit(int x, int i) {
    int mask = (1 << i);
    return (x & mask) == 1 ? 1 : 0; 
}

void set_i(int &x, int i) {
    int mask = (1 << i);
    x = (x | mask);
}

void clear_i(int &x, int i) {
    int mask = ~(1 << i);
    x = (x & mask);
}


void update_i(int &x, int i, int v) {
    clear_i(x, i);
    int mask = (v << i);
    x = x | mask;
}

int main() {

    int x = 14;
    int i = 3;
    int v = 1;
    update_i(x, i, v);
    cout << x << endl;
    return 0;
}