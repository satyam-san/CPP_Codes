#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


vector <int> check(vector <int> a, int k, int i, vector <int> ans) {
    if (i == a.size()) {
        return ans;
    }
    else {
        if (a[i] == k) {
            ans.push_back(i);
            i++;
            return check(a, k, i, ans);
        }
        else {
            ++i;
            return check(a, k, i, ans);
        }
    }
}


int main() {
    vector <int> a = {1, 3, 2, 4, 5, 7, 3, 2, 9};
    int k = 3;
    vector <int> ans;
    ans = check(a, k, 0, ans);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}