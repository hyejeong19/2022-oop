#ifndef SERKER
#define SERVER
#include <iostream>
#include "worker.hpp"

using namespace std;

class server: public Worker{
    public:
        server(string, int);
        void order_cook();
        void serve_food();
        void give_money();
};

#endif
