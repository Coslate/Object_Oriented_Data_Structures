#include <pair.h>
#include <iostream>

  
int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);
  //delete hp;
  
  std::cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << std::endl;

  std::cout<<"*(p.pa) = "<<*(p.pa)<<", *(p.pb) = "<<*(p.pb)<<std::endl;
  std::cout<<"*(q.pa) = "<<*(q.pa)<<", *(q.pb) = "<<*(q.pb)<<std::endl;
  std::cout<<"*(hp->pa) = "<<*(hp->pa)<<", *(hp->pb) = "<<*(hp->pb)<<std::endl;
  delete hp;
  return 0;
}
