#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int g = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > g) {
            g = a[i];
        }
    }

    int b[g + 1] = {0};
    for (int i = 0; i < n; i++) {
        b[a[i]]++;
    }

    int j = 0;
    for (int i = 0; i < g + 1; i++) {
        if (b[i] > 0) {
            while (b[i]--) {
                a[j] = i;
                j++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}