#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    int n;
    cin >> n;

    int l = 0;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if (l < s.length()) {
            l = s.length();
        }
    }
    cout << l << endl;
    return 0;
}