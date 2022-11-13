#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


bool getBit(int x, int i) {
    int mask = (1 << i);
    return (x & mask) == 1 ? 1 : 0; 
}

int main() {
    int x;
    cin >> x;
    int i;
    cin >> i;
    cout << getBit(x, i) << endl;
    return 0;
}