#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
using namespace std;


int main() {
    string s;
    getline(cin, s);
    int ans = 0;
    int k = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] == '1') {
            ans = ans + (pow(2, k));
        }
        k++;
    }
    cout << ans << endl;
    return 0;
}