#include "worker.hpp"
#include "cook.hpp"
#include <string>
#include <iostream>

using namespace std;

Cook::Cook(string _name, int _age): Worker(_name, _age){
}

void Cook::cook(){
    cout << name << "start cook"<<endl;
}

void Cook::give_food(){
    cout << name << "give food to server" <<endl;
}