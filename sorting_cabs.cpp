#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

float dis(int x, int y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

bool compare(pair<int, int> a, pair<int, int> b) {
    return (dis(a.first, a.second) < dis(b.first, b.second));
}


int main() {

    cout << "Enter no. of pairs : " << endl;
    int n;
    cin >> n;
    vector <pair <int, int> > cabs;
    for (int i = 0; i < n; i++) {
        pair<int, int> t;
        cin >> t.first;
        cin >> t.second;
        cabs.push_back(t);
    }

    sort(cabs.begin(), cabs.end(), compare);

    for (int i = 0; i < n; i++) {
        cout << "(" << cabs[i].first << ", " << cabs[i].second << ")" << endl;
    }

    return 0;
}