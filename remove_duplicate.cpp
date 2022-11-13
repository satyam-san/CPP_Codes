#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare(char a, char b) {return int(a) < int(b);}


int main() {
    string s;
    getline(cin, s);
    sort(s.begin(), s.end(), compare);
    char t = s[0];
    int k = 1;
    for (int i = 0; i < s.length(); i++) {
        while(t == s[i]) {
            i++;
        }
        t = s[i];
        s[k] = t;
        k++;
    }
    for (int i = 0; i < k; i++) {
        cout << s[i];
    }
    cout << endl;
    return 0;
}