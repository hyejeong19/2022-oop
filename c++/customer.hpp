#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>

using namespace std;

class Customer{
    int cus_id;
    public:
        int cus_num;
        Customer(int);
        ~Customer();
        void order_food();
        void pay_food();
};

#endif