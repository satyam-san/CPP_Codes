#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int prefix[n];
    prefix[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = a[i] + prefix[i - 1];
    }

    int lar = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = i == 0 ? prefix[j] -prefix[i - 1] : prefix[j];
            lar = max(sum, lar);
        }
    }
    cout << lar << endl;
    return 0;
}