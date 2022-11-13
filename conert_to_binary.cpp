#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int convert(int n) {
    int ans = 0;
    int i = 1;

    while (n > 0) {
        int last = (n & 1);
        ans = ans + (last * i);
        i = i * 10;
        n = n >> 1;
    }

    return ans;
}


int main() {
    int n = 10;
    cout << convert(n) << endl;
    return 0;
}