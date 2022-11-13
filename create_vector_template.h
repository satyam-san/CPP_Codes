template <typename T>
class Vector {
    //data members
    T *arr;
    int cs;
    int ms;

    public:

    //class constructor
    Vector(int max_size) {
        cs = 0;
        ms = max_size;
        arr = new T[ms];
    }

    void push_back(const int d) {
        if (cs == ms) {
            T *p = arr;
            ms = ms * 2;
            arr = new T[ms];
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

    T front() const{
        return arr[0];
    }

    T back() const{
        return arr[cs - 1];
    }

    T at(const int i) const{
        return arr[i];
    }

    int size() const{
        return cs;
    }

    int capacity() const{
        return ms;
    }

    T operator[] (const int i) {
        return arr[i];
    }
};