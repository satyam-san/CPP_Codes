#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <bitset>
using namespace std;


#define M 1000

void check(vector <int> v, bitset <M> &bit) {
    bit.reset();

    bit[0] = 1;
    for (int i = 0; i < v.size(); i++) {
        bit = bit | (bit << v[i]);
    }
}


int main() {
    vector <int> v = {1, 2, 3};

    vector <int> q = {5, 3, 8};

    bitset <M> bit;
    check(v, bit);

    for (int i = 0; i < q.size(); i++) {
        if (q[i] > M) {
            cout << "NA" << endl;
        }
        else {
            if (bit[q[i]] == 1) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}