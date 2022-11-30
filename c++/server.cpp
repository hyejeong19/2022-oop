#include "server.hpp"
#include <string>
#include <iostream>
#include "worker.hpp"

using namespace std;

server::server(string _name, int _age): Worker(_name, _age){
}


void server::order_cook(){
    cout << name<< "order food to cook"<< endl;
}

void server::serve_food(){
    cout << name<< "serve food to customer"<< endl;
}

void server::give_money(){
    cout << name<< "give money to owner"<< endl;
}