#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


void set_i(int &x, int i) {
    int mask = (1 << i);
    x = (x | mask);
}

int main() {
    int x = 5;
    int i = 1;
    set_i(x, i);
    cout << x << endl;
    return 0;
}