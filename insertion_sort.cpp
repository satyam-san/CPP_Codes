#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n - 1; i++) {
        int k = a[i];
        int j;
        for (j = i - 1; j >= 0 && a[j] > k; j--) {
            a[j + 1] = a[j];
        }
        a[j + 1] = k;
    }

    for (auto i : a) {
        cout << i << endl;
    }
    return 0;
}