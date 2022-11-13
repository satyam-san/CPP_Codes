#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

//pass by reference
void apply_tax(float &income) {
    float tax = 0.10;
    //cout << income * tax << endl;
    income = income - (income * tax);
}

//pass by value
void apply(float income) {
    float tax = 0.10;
    income = income - (income * tax);
}

//pass by reference using pointers
void watch_count(int *views) {
    *views = *views + 1;
}

int main() {
    //float income;
    //cin >> income;
    //apply_tax(income);
    //cout << income << endl;
    int views = 100;
    watch_count(&views);
    cout << views << endl;
    return 0;
}