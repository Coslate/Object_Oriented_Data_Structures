#include <pair.h>
#include <iostream>


Pair::Pair(const int &a, const int &b):a_(a), b_(b){
    //Nothing
}

Pair::Pair(const Pair &others){
    a_ = others.a_;
    b_ = others.b_;
}

Pair::~Pair(){
    //Nothing
}

sumPair::sumPair(const int &a, const int &b):Pair(a, b), sum(a+b){
    //Nothing
}


