#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    //initialise
    vector <int> p = {1, 2, 3, 4, 5};

    //using fill comstructor
    vector <int> q(10, 3);

    for (auto i : q) {
        cout << i << endl;
    }


    for (int i = 0; i < p.size(); i++) {
        cout << "Size of p = " << p.size() << "    value = " << p[i] << endl;
    }

    //push_back
    q.push_back(15);

    for (auto i : q) {
        cout << i << endl;
    }

    //pop_back
    p.pop_back();

    for (auto i : p) {
        cout << i << endl;
    }

    //vector size - no. of elements in vector
    cout << p.size() << endl;

    //vector capacity - total size occupied in memory (double itself capacity limit is reached)
    cout << p.capacity() << endl;


    //2D vector

    vector < vector<int> > arr = {
                                    {2, 3, 4, 5},
                                    {1, 8},
                                    {6, 10, 12},
                                    {1, 2, 3}
    };

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //initialose 2d vector using fill comstructor
    vector < vector<int> > z(3);     //only row initialisation

    vector < vector<int> > y(5, vector<int>(3, 2));      //row(5) initialisation with column(3) initialisation with a value of 2

    //find() function - to search a element in a vector
    int key = 3;
    vector <int> :: iterator it = find(p.begin(), p.end(), key);            //find function return a iterator pointing to a element i.e. address and vector<int>::iterator is the data type.
    if (it != p.end()) {
        cout << it - p.begin() << endl;                  //it - p.begin() - to find the index
    }
    else {
        cout << "Element not found" << endl;
    }

    //similar functions to find - search() - to search for a range, binary_search() - returns a boolean
    return 0;
}