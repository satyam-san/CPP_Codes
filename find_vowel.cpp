#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
    string s;
    getline(cin, s);
    vector <char> a;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            a.push_back(s[i]);
        }
    }
    for (auto i : a) {
        cout << i;
    }
    cout << endl;
    return 0;
}