#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    char t;
    t = s[0];
    int count = 0;
    int k = 0;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        while(t == s[i]) {
            count++;
            i++;
        }
        s[k] = t;
        k++;
        t = s[i];
        if (count != 1) {
            string p = to_string(count);
            int l = p.length();
            for (int j = 0; j < l; j++) {
                s[k] = p[j];
                k++;
            }
            count = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << s[i] << endl;
    }
    cout << k << endl;
    return 0;
}