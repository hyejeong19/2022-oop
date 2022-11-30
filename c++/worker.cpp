#include <string>
#include "worker.hpp"
#include <iostream>

using namespace std;

Worker::Worker(string _name, int _age){
    name = _name;
    age = _age;
}

Worker::~Worker() {
    cout << "Instance removed" << endl;
}

void Worker::receive_salay(){
    cout << name << "receive_salay"<< endl;
}
