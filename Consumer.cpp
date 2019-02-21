#include "Consumer.h"

#include <iostream>

Consumer::Consumer() {
    producer = new Producer();
}

Consumer::~Consumer() {

}

void Consumer::printNumber() {
    std::cout << "Consumer take " << producer.topNumber << std::endl;
}