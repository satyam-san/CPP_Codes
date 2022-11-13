#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

vector <string> ans;


vector <string> binary_strings(int n) {

    if (n == 1) {
        ans.push_back("0");
        ans.push_back("1");
        return ans;
    }

    if (n == 2) {
        ans.push_back("00");
        ans.push_back("01");
        ans.push_back("10");
        return ans;
    }

    ans.push_back("0");
    binary_strings(n - 1);

    ans.push_back("1");
    ans.push_back("0");
    binary_strings(n - 2);

    
    return ans;
}


int main() {
    int n = 3;
    vector <string> ans = binary_strings(n);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}