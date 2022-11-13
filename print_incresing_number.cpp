#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


vector <int> print(int n) {
    vector <int> ans;
    n--;
    if (n > 1) {
        ans = print(n);
    }
    ans.push_back(n);
    return ans;
}


int main() {
    int n = 5;
    vector <int> ans;
    ans = print(n + 1);
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}