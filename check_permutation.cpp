#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare(char p, char q) {return int(p) < int(q);}

int main() {
    string a;
    getline(cin, a);
    string b;
    getline(cin, b);
    sort(a.begin(), a.end(), compare);
    sort(b.begin(), b.end(), compare);
    if (a == b) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
    return 0;
}