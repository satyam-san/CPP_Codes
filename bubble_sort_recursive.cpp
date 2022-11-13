#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


void bubbleSortRec(int a[], int n) {
    if (n == 1) {
        return;
    }

    for (int j = 0; j < n - 1; j++) {
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1]);
        }
    }

    bubbleSortRec(a, n - 1);
}


void bubbleSortRec2 (int a[], int n, int j) {
    if (n == 1) {
        return;
    }
    if (j == n - 1) {
        bubbleSortRec2(a, n - 1, 0);
        return;
    }

    if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
    }
    bubbleSortRec2(a, n, j + 1);
}


int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bubbleSortRec2(a, n, 0);
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}