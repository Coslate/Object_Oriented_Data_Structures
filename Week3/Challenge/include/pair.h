#pragma once

class Pair {
    public:
        int *pa, *pb;
        Pair(const int &a, const int &b);
        Pair(const Pair &others);
       ~Pair();
};
