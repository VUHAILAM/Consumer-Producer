#include "Consumer.h"

#include <iostream>
#include <chrono>
#include <thread>

Consumer::Consumer(Producer *pro) {
    this->m_pro = pro;
}

Consumer::~Consumer() {
    
}

void Consumer::printNumber() {
    
    while(!m_pro->isEmpty()) {
        std::cout << "Consumer take " << m_pro->topNumber() << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

void Consumer::run() {
    m_con_thread = std::thread(&Consumer::printNumber, this);
    if(m_con_thread.joinable()) {
        m_con_thread.join();
    }
}