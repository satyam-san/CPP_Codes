#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

string convert(string s, int numRows) {
    vector <char> ans;
    char a[numRows][1000];
    int k = 0;
    for (int i = 0; i < s.length(); i++) {
        int j = 0;
        while (j < numRows - 1) {
            if (i == s.length()) {
                    break;
            }
            a[j][k] = s[i];
            i++;
            j++;
        }
        if (i != s.length()) {
            k++;
        }
        while (j > 0) {
            if (i == s.length()) {
                break;
            }
            a[j][k] = s[i];
            i++;
            k++;
            j--;
        }
    }
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= k; j++) {
            ans.push_back(a[i][j]);
        }
    }
    string str(ans.begin(), ans.end());
    return str;
}

int main() {
    string s = "PAYPALISHIRING";
    int numRows = 4;
    string p = convert(s, numRows);
    cout << p << endl;
    return 0;
}