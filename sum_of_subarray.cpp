#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int lar = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum = sum + a[k];
            }
            if (sum > lar) {
                lar = sum;
            }
        }
    }
    cout << lar << endl;
    return 0;
}