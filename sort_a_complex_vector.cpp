#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int calc(vector <int> m) {
    return m[0] + m[1] + m[2];
}

bool compare(pair<string, vector<int>> s1, pair<string, vector<int> > s2) {
    return (calc(s1.second) > calc(s2.second));
}

int main() {
    vector <pair <string, vector<int> > > s = {            //complex data structure
        {"rohan", {10, 20, 30}},
        {"sachin", {11, 15, 15}},
        {"shruti", {9, 20, 20}},
        {"ram", {20, 20, 20}}
    };

    sort(s.begin(), s.end(), compare);

    for (int i = 0; i < s.size(); i++) {
        cout << s[i].first << endl;
    }


    return 0;
}