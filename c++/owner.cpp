#include <string>
#include <iostream>

#include "owner.h"

using namespace std;
int Owner::money =1000000;

Owner::Owner(string _name, int _age){
    name = _name;
    age = _age;
}

Owner::~Owner(){
    cout << "Instance removed." <<endl;
}

void Owner::pay_salary(){
    cout << name << "pay_salary to workers"<< endl;
    Owner::money -= 100000;
}


