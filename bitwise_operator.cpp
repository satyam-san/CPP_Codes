#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
    // and bitwise operator - &
    int x = 5;
    int y = 7;
    cout << (x & y) << endl;

    //rules of & : (all numerics are bits)
    // 1 & 0 = 0
    // 1 & 1 = 1
    // 0 & 1 = 0
    // 0 & 0 = 0

    //or bitwise operator - |
    cout << (x | y) << endl;

    // rules of | : (all munerics are bits) 
    // 1 | 1 = 0
    // 0 | 0 = 0
    // 1 | 0 = 1
    // 0 | 1 = 1

    //negation operator - ~
    cout << (~x) << endl;

    //rules of ~ :
    // ~1 = 0
    //~0 = 1
    // ~ inverts all the bits including most significant bit hence making the converted decimal a negative number
    // MSB is the sign bit and the rest of bits are magnitude in 2's compliment

    //Exclusive or operator - ^
    cout << (x ^ y) << endl;

    //rules of ^ :
    // 1 ^ 1 = 0
    // 0 ^ 0 = 0
    // 1 ^ 0 = 1
    // 0 ^ 1 = 1


    //left shift operator - << 
    cout << (x << y) << endl;

    //rules of << :
    // shifts the bits of x by a factor of y
    // x << y = x * pow(2, y)

    //right shift operator - >>
    cout << (x >> y) << endl;

    //rules of >> :
    // discards the right most y bits of x
    // x >> y = x / pow(2, y)
    return 0;
}