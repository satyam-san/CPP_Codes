#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int f = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - (i + 1); j++) {
            if (a[j] > a[j + 1]) {
                f = 1;
                swap(a[j], a[j + 1]);
            }
        }
        if (f == 1) {
            break;
        }
    }

    for (auto i : a) {
        cout << i << endl;
    }
    return 0;
}