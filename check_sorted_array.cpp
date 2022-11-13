#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


bool check(vector <int> a, int i) {
    if (i == a.size() - 1) { //base case
        return true;
    }
    else if (a[i] <= a[i + 1]) {
        i++;
        check(a, i);
    }
    else {
        return false;
    }
}


int main() {
    vector <int> a = {2, 1, 5, 6, 8};
    cout << check(a, 0) << endl;
    return 0;
}