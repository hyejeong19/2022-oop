#ifndef OWNER_H
#define OWNER_H
#include <iostream>
#pragma once

using namespace std;

class Owner {
    public:
        string name;
        int age;
        static int money ;
        Owner(string, int);
        ~Owner();
        void pay_salary();
};

#endif
