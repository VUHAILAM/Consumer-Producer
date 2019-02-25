#include "Producer.h"

#include <iostream>
#include <random>

Producer::Producer() {
    m_queue.push(999);
    m_queue.push(888);
}

Producer::~Producer() {

}

bool Producer::isEmpty() {
    return m_queue.empty();
}

int Producer::topNumber() {
    if (!m_queue.empty()) {
        int topNumber = m_queue.front();
        m_queue.pop();
        return topNumber;
    } else return -1;
}

void Producer::generateNumber() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> num(1, 100);

    for(int i = 0; i < 100; i++) {
        int number = num(gen);
        std::cout << "Producer generate " << number << std::endl;
        m_queue.push(number);
    }
}

 void Producer::displayQueue() {
        while(!m_queue.empty()){
            std::cout << m_queue.front() << " ";
            m_queue.pop();
        }
        
        
    }