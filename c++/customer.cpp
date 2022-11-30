#include "customer.hpp"
#include <iostream>

using namespace std;

Customer::Customer(int _cus_id){
    cus_id = _cus_id;
}

Customer::~Customer(){
    cout << "Instance removed." << endl;
}

void Customer::order_food(){
    cout << cus_id << "order food to server"<<endl;
}

void Customer::pay_food(){
    cout << cus_id << "pay food to server" <<endl;
}