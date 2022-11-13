#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int a[n];
    int lar;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) {
            lar = a[i];
        }
        else {
            lar = min(lar, a[i]);
        }
    }
    
    int k;
    cin >> k;

    int flag = 0;

    for (int i = 0; i < n; i++) {
        if (k == a[i]) {
            flag = 1;
            cout << "found k" << endl;
        }
    }

    if (flag == 0) {
        for (int i = 0; i < n; i++) {
            if (a[i] > lar && a[i] < k) {
                lar = a[i];
            }
        }
    }
    cout << lar << endl;
    return 0;
}