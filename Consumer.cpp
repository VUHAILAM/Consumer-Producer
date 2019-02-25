#include "Consumer.h"

#include <iostream>

Consumer::Consumer() {
}

Consumer::~Consumer() {

}

void Consumer::printNumber(Producer *pro) {
    while(!pro->isEmpty()) {
        std::cout << "Consumer take " << pro->topNumber() << std::endl;
    }
}