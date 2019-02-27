#include <iostream>
#include <thread>

#include "Producer.h"
#include "Consumer.h"

int main() {
    Producer pro;
    Consumer con;

    //std::thread printPro(&Producer::generateNumber, &pro);
    //std::thread printCon(&Consumer::printNumber, &con, &pro);
   
    pro.run();
    con.run(&pro);

    //pro.displayQueue();

    return 0;
}