#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int power(int a, int n) {
    if (n == 0) {
        return 1;
    }
    return a * power(a, n - 1);
}


//optimised
//pow(a, n) = a * pow(a, n / 2) ^ 2; if n is odd
//pow(a, n) = pow(a, n / 2) ^ 2; if n is even

int fastpower(int a, int n) {
    if (n == 0) {
        return 1;
    }

    int subprob = fastpower(a, n / 2);
    int subsquare = subprob * subprob;
    if (n & 1) { return a * subsquare; }
    else { return subsquare; }
}


int main() {
    int a = 2;
    int n = 10;
    cout << power(a, n) << endl;
    cout << fastpower(a, n) << endl;
    return 0;
}