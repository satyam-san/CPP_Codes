#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare1 (pair <string, int> p1, pair <string, int> p2) {
    return p1.first < p2.first;
}

bool compare2 (pair <string, int> p1, pair <string, int> p2) {
    return p1.second < p2.second;
}


void name(vector <pair <string, int> > fruits) {
    sort(fruits.begin(), fruits.end(), compare1);
    for (int i = 0; i < fruits.size(); i++) {
        cout << fruits[i].first << " " << fruits[i].second << endl;
    }
}

void price(vector <pair <string, int> > fruits) {
    sort(fruits.begin(), fruits.end(), compare2);
    for (int i = 0; i < fruits.size(); i++) {
        cout << fruits[i].first << " " << fruits[i].second << endl;
    }
}

int main() {
    vector <pair <string, int> > fruits;
    pair <string, int> t(" ", 0);
    while (t.first != "#") {
        cin >> t.first;
        cin >> t.second;
        fruits.push_back(t);
    }

    fruits.pop_back();

    string s;
    cin >> s;

    if (s == "name") {
        name(fruits);
    }
    else {
        price(fruits);
    }
    return 0;
}