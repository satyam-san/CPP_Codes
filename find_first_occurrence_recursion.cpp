#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int first_occur(vector <int> a, int k, int i) {
    if (i == a.size()) {
        return -1;
    }
    else if (a[i] == k) {
        return i;
    }
    else {
        i++;
        return first_occur(a, k, i);
    }
}


int main() {
    vector <int> a = {1, 4, 2, 5, 3};
    int k = 3;
    cout << first_occur(a, k, 0) << endl;
    return 0;
}