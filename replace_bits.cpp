#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


void clear(int &n, int i, int j) {
    int a = (-1 << (j + 1));
    int b = (1 << i) - 1;
    int mask = a | b;
    n = n & mask;
}


void replace(int &n, int &m, int i, int j){
    m = (m << i);
    n = n | m;
}


int main() {
    int n = 15;
    int m = 2;
    int i = 1;
    int j = 3;
    clear(n, i, j);
    replace(n, m, i, j);
    cout << n << endl;
    return 0;
}