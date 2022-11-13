#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
    // Address of Operator (&)
    int x = 10;
    cout << &x << endl;

    // Pointer (*)
    int *p = &x;
    cout << p << endl;

    // Dereference Operator - value variable the pointer is pointing to.
    cout << *p << endl;

    // Reference Operator - nickname of a variable
    int &q = x;
    cout << q << endl;
    cout << &q << endl;

    //Pointer to a pointer
    int **xp = &p;
    cout << xp << endl;
    cout << &p << endl;
    return 0;
}