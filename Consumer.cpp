#include "Consumer.h"

#include <iostream>
#include <chrono>
#include <thread>

Consumer::Consumer() {
}

Consumer::~Consumer() {

}

void Consumer::printNumber(Producer *pro) {
    while(!pro->isEmpty()) {
        std::cout << "Consumer take " << pro->topNumber() << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}