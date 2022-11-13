#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int check(vector <int> a, int i, int k) {
    if (i == -1) {
        return -1;
    }
    else {
        //cout << a[i] << endl;
        if (a[i] == k) {
            return i;
        }
        else {
            --i;
            return check(a, i, k);
        }
    }
    return -1;
}


int main() {
    vector <int> a = {1, 3, 2, 5, 4, 3, 6, 7};
    int k = 3;
    int i = a.size() - 1;
    cout << check(a, i, k) << endl;
    return 0;
}