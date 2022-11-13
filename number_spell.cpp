#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

string spells[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void spell(int n) {
    if (n == 0) {
        return;
    }
    int r = n % 10;
    n = n / 10;
    spell(n);
    cout << spells[r] << " ";
}


int main() {
    int n = 2021;
    spell(n);
    cout << endl;
    return 0;
}