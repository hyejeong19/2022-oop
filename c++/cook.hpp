#include <iostream>
#ifndef COOK_H
#define COOK_H
#include "worker.hpp"

using namespace std;

class Cook: public Worker {
    public:
        Cook(string, int);
        void cook();
        void give_food();
};

#endif
