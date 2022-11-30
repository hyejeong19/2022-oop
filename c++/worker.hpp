#ifndef WORKER
#define WORKER
#include <iostream>

using namespace std;

class Worker {
    protected:
        string name;
        int age;
    public:
        Worker(string, int);
        ~Worker();
        void receive_salay();
};

#endif