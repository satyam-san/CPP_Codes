#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Vector {
    //data members
    int *arr;
    int cs;
    int ms;

    public:

    //class constructor
    Vector(int max_size) {
        cs = 0;
        ms = max_size;
        arr = new int[ms];
    }

    void push_back(const int d) {
        if (cs == ms) {
            int *p = arr;
            ms = ms * 2;
            arr = new int[ms];
            for (int i = 0; i < ms; i++) {
                arr[i] = p[i];
            }
            arr[cs] = d;
            cs++;
            delete []p;
        }
        else {
            arr[cs] = d;
            cs++;
        }
    }

    void pop_back() {
        if (cs != 0) {
            cs--;
        }
    }

    bool isEmpty() const{
        return cs == 0;
    }

    int front() const{
        return arr[0];
    }

    int back() const{
        return arr[cs - 1];
    }

    int at(const int i) const{
        return arr[i];
    }

    int size() const{
        return cs;
    }

    int capacity() const{
        return ms;
    }

    int operator[] (const int i) {
        return arr[i];
    }
};



int main() {

    Vector v(5);

    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(16);
    v.pop_back();

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    cout << v.front() << endl;
    cout << v.back() << endl;

    cout << v.at(1) << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
    
    return 0;
}