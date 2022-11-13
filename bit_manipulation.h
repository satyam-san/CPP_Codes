bool getBit(int x, int i) {
    int mask = (1 << i);
    return (x & mask) == 1 ? 1 : 0; 
}

void set_i(int &x, int i) {
    int mask = (1 << i);
    x = (x | mask);
}

void clear_i(int &x, int i) {
    int mask = ~(1 << i);
    x = (x & mask);
}