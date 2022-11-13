#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector <pair <int, int>> v;

    for (int i = 0; i < n; i++) {
        int x;
        int y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    // for (int i = 0; i < n; i++) {
    //     cout << v[i].first << ", " << v[i].second << endl;
    // }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - (i + 1); j++) {
            if (v[j].first > v[j + 1].first) {
                swap(v[j], v[j + 1]);
            }
            else if (v[j].first == v[j].first) {
                if (v[j].second > v[j].second) {
                    swap(v[j], v[j + 1]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i].first << ", " << v[i].second << endl;
    }
    return 0;
}