#include <pair.h>
#include <iostream>


Pair::Pair(const int &a, const int &b){
    pa = new int(a);
    pb = new int(b);
}

Pair::Pair(const Pair &others){
    pa = new int(*(others.pa));
    pb = new int(*(others.pb));
}

Pair::~Pair(){
    delete pa;
    delete pb;

    pa = nullptr;
    pb = nullptr;
}
