#include <iostream>
#include <thread>

#include "Producer.h"
#include "Consumer.h"

int main() {
    Producer* pro = new Producer();
    Consumer* con = new Consumer(pro);
   
    pro->run();
    con->run();

    return 0;
}