#pragma once

class Pair {
    public:
        Pair(const int &a, const int &b);
        Pair(const Pair &others);
       ~Pair();
        int & getNum_a(){return a_;};
        int & getNum_b(){return b_;};
    private:
        int a_, b_;
};

class sumPair:public Pair{
    public:
        int sum;
        sumPair(const int &a, const int &b);
};
