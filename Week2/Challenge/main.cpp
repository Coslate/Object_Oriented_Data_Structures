#include <pair.h>
#include <iostream>

Pair *pairFactory(){
    Pair *pair_created = new Pair;
    return pair_created;
}

int main(){
    Pair *p;
    p = pairFactory();

    p->check();

    delete p;

    std::cout<<"If you can see this text, the system hasn't crashed yet!"<<std::endl;

    return EXIT_SUCCESS;
}
