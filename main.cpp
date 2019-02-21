#include <iostream>
#include <thread>

#include "Producer.h"
#include "Consumer.h"

int main() {
    Producer pro = new Producer();
    Consumer con = new Consumer();

    std::thread printPro(pro.generateNumber);
    std::thread printCon(con.printNumber);

    printPro.join();
    printCon.join();

    return 0;
}