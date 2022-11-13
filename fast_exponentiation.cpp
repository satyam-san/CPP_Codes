#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

//Binary representation of any decimal N will have atmost (logN to the base 2) degits in its binary representation

int power(int a, int n) {
    int ans = 1;

    while (n > 0) {
        int last = (n & 1);
        if (last) {
            ans = ans * a;
        }
        a = a * a;
        n = n >> 1;
    }
    return ans;
}


int main() {
    int a = 3;
    int n = 5;
    cout << power(a, n) << endl;
    return 0;
}